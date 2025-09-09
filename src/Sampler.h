/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Author: Sanjib Sharma                                                     *
 * Modified by: Robyn E Sanderson (2018)                                     *
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

#ifndef SAMPLER_H_
#define SAMPLER_H_

#include "sutils.h"

class Sampler
{
public:
	Sampler(int nsize,double xmin,double xmax,double (* func) (double x),int optionlinlog);
	Sampler(vector<double> &x,vector<double> &y);
	Sampler(vector<double> &x);
	Sampler(const string fname);
	~Sampler();
	void normalize();
	void calculateCpd( );
	double rand( );
	void print( );
	void plot( );
	vector<double> randv(int nsize1);
	void setRange(double xmin1,double xmax1);
	void setSeed(int64_t seed);
	void getFacv(vector<double> &x1_a,vector<double> &x2_a,vector<double> &fac_a);
	double getFac(double xmin1,double xmax1);
	double (*function) (double x);
	double meanx,x_min,x_max;
	double cpd_min,cpd_max;
	std::vector<double> xd;
	std::vector<double> x;
	std::vector<double> px;
	std::vector<double> cpd;
};

#endif /*SAMPLER_H_*/
