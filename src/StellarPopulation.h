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

#ifndef STELLARPOPULATION_H_
#define STELLARPOPULATION_H_
#include"BHTree.h"
#include"IsochroneDB.h"
#include"SurveyDesign.h"

class StellarPopulation
{
public:
	StellarPopulation(int i,const double* posC,int warpFlareOn1,Interp *vcircP1,int option,const string &inputDir);
	void spawn(SurveyDesign &sur,IsochroneDB &ic,double fSample);
	virtual ~StellarPopulation();
private:
	StarParticle Star;
	BHTree BHT;
	Population* cpop;
};

#endif /* STELLARPOPULATION_H_ */
