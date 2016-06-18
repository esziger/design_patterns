/*
 * FancyFormatter.hh
 *
 *  Created on: 2016. jún. 18.
 *      Author: Gergely
 */

#ifndef SRC_FANCYFORMATTER_HH_
#define SRC_FANCYFORMATTER_HH_


#include "IFormatter.hh"
#include <algorithm>

class FancyFormatter : public IFormatter
{
public:
	std::string
	Format(std::string key, std::string value)
	{
		return std::string("-=( "+ key + ": " + value + " )=-");
	}
};


#endif /* SRC_FANCYFORMATTER_HH_ */
