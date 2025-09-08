/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Author: Sanjib Sharma                                                     *
 * Modified by: Robyn E Sanderson (2018)                                     *
 * Copyright (C) 2012  Sanjib Sharma                                         *
 * Copyright (C) 2018  Robyn E Sanderson                                     *
 * Copyright (C) 2022  Adrien CR Thob                                        *
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

#ifndef SATELLITE_H_
#define SATELLITE_H_

#include "IsochroneDB.h"
#include "SurveyDesign.h"

void load_sat_list(int halo_no,vector<pair<int,int> > &sat_list);

class Satellite
{
public:
	Satellite(const string &fname,int sat_no,int satID1,int hdim1,int nres1);
	~Satellite();
	void initialize_stellar_data(Sampler& imf,IsochroneDB &ic);
	void spawn1(SurveyDesign &sur, Sampler& imf,IsochroneDB &ic,double fSample,int seed1);
    inline ParticleStar& operator[] (unsigned i) const {return part[i];}
    void print();
    void readEbfFile(const string &fname,int sat_no);
    void initialize(int size1);
    double mass() {return m_tot;};
	double light() {return l_tot_v;};
public:
	int nsize,items,hdim,nres;
	vector<ParticleTag> tags;
    ParticleStar* part;
	double* data;
	double* data1;
private:
	int nstars,nstars_rejected,satID;
	double m_tot,l_tot_b,l_tot_v;
	ParticleStar *pBegin,*pEnd;
	Sampler *ageSampler;
	vector<double> age,feh,alpha,age1,feh1,feh2,alpha2;
	vector<double> age_a,feh_a,m1_a,m2_a,faca_a,fac_a;
	int debug;
};

#endif /*SATELLITE_H_*/
