/*
 * TextShape.hh
 *
 *  Created on: 26 maj 2016
 *      Author: esziger
 */

#ifndef TEXTSHAPE_HH_
#define TEXTSHAPE_HH_

#include "Shape.hh"
#include "TextView.hh"

//Class Adapter
class TextShape : public Shape, private TextView
{
public:
	TextShape(Point bottomLeft, Point topRight);
	~TextShape();

	virtual void BoundingBox(Point& bottomLeft, Point& topRight) const;

	virtual bool isEmpty() const;
	//virtual Manipulator* CreateManipulator() const;

};

#endif /* TEXTSHAPE_HH_ */
