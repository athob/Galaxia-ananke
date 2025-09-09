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

#include "Interp.h"

Interp::Interp()
{
	// TODO Auto-generated constructor stub

}

Interp::~Interp()
{
	// TODO Auto-generated destructor stub
}



void Interp::setFromFile(const string& fname)
{
	   float temp;
	    ifstream fd;
	    int i,no;
	    x.clear();
	    y.clear();
	    fd.open(fname.c_str());
	    if (fd.is_open())
	    {
	    	cout<<left<<setw(36)<<"Reading tabulated values from file- "<<fname<<endl;//" ....."<<flush;
	    	fd>>no;
		for(i=0;i<no;++i)
		{
		    fd>>temp;
		    x.push_back(temp);
		}
		for(i=0;i<no;++i)
		{
		    fd>>temp;
		    y.push_back(temp);
		}
		fd>>temp;

		fd.close();
	    }
	    else
	    {
	    	cout<<"Error opening vcirc file: "<<fname<<endl;
	    	exit(1);
	    }

}
