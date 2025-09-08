/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Author: Sanjib Sharma                                                     *
 * Copyright (c) 2012  Sanjib Sharma                                         *
 * Copyright (c) 2018  Robyn E Sanderson                                     *
 * Copyright (c) 2022  Adrien CR Thob                                        *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of Galaxia-ananke:                                      *
 * https://github.com/athob/Galaxia-ananke.                                  *
 * The original software was Galaxia.                                        *
 *                                                                           *
 * The full copyright notice, including terms governing use, modification,   *
 * and redistribution, is contained in the files LICENSE and COPYRIGHT,      *
 * which can be found at the root of the source code distribution tree.      *
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
