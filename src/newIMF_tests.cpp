/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Author: Robyn E Sanderson                                                 *
 * Modified by: Adrien CR Thob (2022)                                        *
 * Copyright (C) 2018  Robyn E Sanderson                                     *
 * Copyright (C) 2022  Adrien CR Thob                                        *
 *                                                                           *
 * This file is part of the Galaxia-ananke project,                          *
 * <https://github.com/athob/Galaxia-ananke>, which is licensed              *
 * under the GNU Affero General Public License v3.0 (AGPL-3.0).              *
 *                                                                           *
 * The full copyright notice, including terms governing use, modification,   *
 * and redistribution, is contained in the files LICENSE and COPYRIGHT,      *
 * which can be found at the root of the source code distribution tree:      *
 * - LICENSE <https://github.com/athob/Galaxia-ananke/blob/main/LICENSE>     *
 * - COPYRIGHT <https://github.com/athob/Galaxia-ananke/blob/main/COPYRIGHT> *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "IsochroneDB.h"
#include "Functions.h"
#include <utility>
#include <iostream>
#include "Satellite.h"
#include "ebfvector.hpp"
#include"Parameters.h"

int main(int argc, char **argv) {

	double mmin, mmax, age, feh;

	Parameters All;
	All.setFromArguments(argc, argv);

	IsochroneDB ic(All.inputDir + "Isochrones/", All.photoCateg + "/", All.photoSys, All.magcolorNames, 1);

	cout<<"iage "<<"ifeh "<<"Mmin "<<"Mmax "<<"age "<<"feh"<<endl;
	for(age=6.5;age<10.2;age+=0.5) {
		for(feh=-2.25;feh<0.2;feh+=0.5) {
			ic.min_max_m_new(age,feh,0.0,&mmin,&mmax,11.0,0);
			cout<<age<<" "<<feh<<endl;
		}
	}
	return 0;
}