/*
 * IManuScript.hh
 *
 *  Created on: 2016. jún. 17.
 *      Author: Gergely
 */

#ifndef IMANUSCRIPT_HH_
#define IMANUSCRIPT_HH_

#include "IFormatter.hh"

class IManuScript
{
public:
	IManuScript(IFormatter* pFormatter)
	:formatter(pFormatter)
	{}

	virtual void Print() = 0;

	virtual ~IManuScript(){}

protected:
	IFormatter* formatter;

};

#endif /* IMANUSCRIPT_HH_ */
