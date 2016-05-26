/*
 * TextView.hh
 *
 *  Created on: 26 maj 2016
 *      Author: esziger
 */

#ifndef TEXTVIEW_HH_
#define TEXTVIEW_HH_

#include "Point.hh"

//Adaptee
//TextView is defined by an origin, height, and width
class TextView
{
private:
	Coord x;
	Coord y;
	Coord width;
	Coord height;

public:
	TextView();
	TextView(Coord pX, Coord pY, Coord pWidth, Coord pHeight);
	~TextView();
	void GetOrigin(Coord& x, Coord& y) const;
	void GetExtent(Coord& width, Coord& height) const;
	bool isEmpty() const;
};



#endif /* TEXTVIEW_HH_ */
