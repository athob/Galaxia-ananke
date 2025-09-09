/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Author: Sanjib Sharma                                                     *
 * Copyright (C) 2012  Sanjib Sharma                                         *
 * Copyright (C) 2018  Robyn E Sanderson                                     *
 * Copyright (C) 2022  Adrien CR Thob                                        *
 *                                                                           *
 * This file is part of the Galaxia-ananke project,                          *
 * <https://github.com/athob/Galaxia-ananke>, which is licensed              *
 * under the GNU Affero General Public License v3.0 (AGPL-3.0).              *
 *                                                                           *
 * This file was originally part of the Galaxia project,                     *
 * from which the Galaxia-ananke project was forked.                         *
 *                                                                           *
 * The full copyright notice, including terms governing use, modification,   *
 * and redistribution, is contained in the files LICENSE and COPYRIGHT,      *
 * which can be found at the root of the source code distribution tree:      *
 * - LICENSE <https://github.com/athob/Galaxia-ananke/blob/main/LICENSE>     *
 * - COPYRIGHT <https://github.com/athob/Galaxia-ananke/blob/main/COPYRIGHT> *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef SUTILS_H_
#define SUTILS_H_

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <ctime>

#include <stdint.h>
#include <inttypes.h>


using namespace std;

const double PI=3.14159265358979323846;

inline void certify(int x,const string& s="")
{
	if(x==0) {cout<<"CHECK FAILED: "<<s<<endl; exit(1);}
}
void stringSplit(const string &s,const char* delimiters,vector<string> &sv);

#endif /* SUTILS_H_ */
