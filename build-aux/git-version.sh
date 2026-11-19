#!/bin/sh
# Prints the version of the git repository that the sources are the work tree of, the way versioneer (pep440 style) does it for
# a Python package: from the tags, TAG alone on a tagged commit and TAG+DISTANCE.gSHA[.dirty] after it, 0+untagged.COUNT.gSHA
# when no tag is reachable, and unknown when the sources are not a work tree of a repository of their own (an archive, a copy).
# usage: git-version.sh [TOP_OF_THE_SOURCES [PREFIX_OF_THE_TAGS]]   (the tags that count are those that start with PREFIX, dropped)
top=${1:-.}
prefix=${2:-v}
unknown() { echo unknown; exit 0; }
command -v git >/dev/null 2>&1 || unknown
# git is trusted only for a directory that is the top of its own work tree, and not for the repository that happens to contain it
[ -e "$top/.git" ] || unknown
described=`git -C "$top" describe --tags --long --dirty --always --match "$prefix[0-9]*" 2>/dev/null` || unknown
dirty=
case $described in *-dirty) dirty=.dirty; described=${described%-dirty};; esac
case $described in
  *-[0-9]*-g[0-9a-f]*)  # TAG-DISTANCE-gSHA
    sha=${described##*-g}; rest=${described%-g*}; distance=${rest##*-}; tag=${rest%-*}; tag=${tag#"$prefix"}
    if [ "$distance" = 0 ] && [ -z "$dirty" ]; then echo "$tag"; else echo "$tag+$distance.g$sha$dirty"; fi;;
  *)                    # no tag that counts: the bare sha
    count=`git -C "$top" rev-list --count HEAD 2>/dev/null` || count=0
    echo "0+untagged.$count.g$described$dirty";;
esac
