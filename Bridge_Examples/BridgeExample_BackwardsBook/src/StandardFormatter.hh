/*
 * StandardFormatter.hh
 *
 *  Created on: 2016. jún. 18.
 *      Author: Gergely
 */

#ifndef SRC_STANDARDFORMATTER_HH_
#define SRC_STANDARDFORMATTER_HH_

#include "IFormatter.hh"

class StandardFormatter : public IFormatter
{
public:
	std::string
	Format(std::string key, std::string value)
	{
		return std::string(key + ": " + value);
	}
};



#endif /* SRC_STANDARDFORMATTER_HH_ */
