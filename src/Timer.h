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

#ifndef TIMER_H_
#define TIMER_H_

#include "sutils.h"

//#include<ctime>
//#include <iostream>



class Timer
{
private:
	clock_t startTime,stopTime;
public:
	Timer();
	~Timer();
	double elapsedTime();
	double currentTime();
	void start();
	void stop();
	void resume();
	void print();
	void print(const char *s);
	void print(const char *s,double n );
	void printC();
	void printC(const char *s);
	void printC(const char *s,double n );
};

//ostream& operator<< (ostream& os, const Timer& timer1);

#endif /*TIMER_H_*/
