/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Author: Sanjib Sharma                                                     *
 * Modified by: Robyn E Sanderson (2018)                                     *
 * Copyright (C) 2012  Sanjib Sharma                                         *
 * Copyright (C) 2018  Robyn E Sanderson                                     *
 * Copyright (C) 2022  Adrien CR Thob                                        *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of Galaxia-ananke:                                      *
 * <https://github.com/athob/Galaxia-ananke>.                                *
 * The original software was Galaxia.                                        *
 *                                                                           *
 * The full copyright notice, including terms governing use, modification,   *
 * and redistribution, is contained in the files LICENSE and COPYRIGHT,      *
 * which can be found at the root of the source code distribution tree:      *
 * - LICENSE <https://github.com/athob/Galaxia-ananke/blob/main/LICENSE>     *
 * - COPYRIGHT <https://github.com/athob/Galaxia-ananke/blob/main/COPYRIGHT> *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef SURVEYERROR_H_
#define SURVEYERROR_H_
#include "StarParticle.h"
#include "Matrix.h"

class SurveyError
{
public:
	SurveyError(int errorOption1):errorOption(errorOption1),gauss(0.0,1.0,33){initialize();}
	vector<double> appMag;
	vector<double> vr;
	double sigma_w,sigma_mu,sigma_r,sigma_vr,sigma_vlb,sigma_fe,sigma_al;
	int errorOption;
	Normaldev gauss;
	void initialize();
	void add(StarParticle &Star);
	~SurveyError();
};




#endif /* SURVEYERROR_H_ */
