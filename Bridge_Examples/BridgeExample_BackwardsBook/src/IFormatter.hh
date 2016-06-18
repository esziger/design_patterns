/*
 * IFormatter.hh
 *
 *  Created on: 2016. jún. 18.
 *      Author: Gergely
 */

#ifndef SRC_IFORMATTER_HH_
#define SRC_IFORMATTER_HH_

#include <iostream>
#include <string>


class IFormatter
{
public:
	virtual std::string Format(std::string key, std::string value) = 0;
	virtual ~IFormatter(){}
};



#endif /* SRC_IFORMATTER_HH_ */
