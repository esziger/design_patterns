/*
 * BackwardsFormatter.hh
 *
 *  Created on: 2016. jún. 18.
 *      Author: Gergely
 */

#ifndef SRC_BACKWARDSFORMATTER_HH_
#define SRC_BACKWARDSFORMATTER_HH_

#include "IFormatter.hh"
#include <algorithm>

class BackwardsFormatter : public IFormatter
{
public:
	std::string
	Format(std::string key, std::string value)
	{
		std::string reversedValue = value;
		std::reverse(reversedValue.begin(), reversedValue.end());
		return std::string(key + ": " + reversedValue);
	}
};


#endif /* SRC_BACKWARDSFORMATTER_HH_ */
