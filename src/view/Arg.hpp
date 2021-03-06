/*
 * Arg.hpp
 *
 *  Created on: 6 mai 2014
 *      Author: paul
 */

#ifndef ARG_HPP_
#define ARG_HPP_

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>
#include <vector>
#include <stdlib.h>
#include "../model/Group.hpp"
#include "../model/Person.hpp"
#include "../model/Donor.hpp"
#include "../model/Csv.hpp"

#define COMMA ","

namespace view
{

	enum STATE {ERROR = 1, WRITE, READ};
	class Arg
	{

	public:
		Arg();
		virtual ~Arg();

		void readArg(int nbrArg, char **myArg, int *state, string *newdata);

	};
}

#endif /* ARG_HPP_ */
