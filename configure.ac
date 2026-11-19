dnl The version below is only the one that AC_INIT has to be given (automake refuses a package without one): it is not the version
dnl of the program, which build-aux/git-version.sh gives from the tags of the git repository when the sources are compiled (see
dnl AM_CPPFLAGS in src/Makefile.am). Changing it means generating configure again.
AC_INIT([Galaxia_ananke], [1.0.1], [adrien.thob@gmail.com])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign -Wall -Werror])
AC_PROG_CXX
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
AM_MAINTAINER_MODE

