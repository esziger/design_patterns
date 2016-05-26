#ifndef SHAPE_HH_
#define SHAPE_HH_

#include "Point.hh"

//Target interface
//Shape assumes a bounding box defined by its opposing corners.
class Shape
{
public:
	virtual ~Shape() {};
	virtual void BoundingBox(Point& bottomLeft, Point& topRight) const = 0 ;

	//create Manipulator object, which knows how to animate a shape when the user manipulates it.
	//virtual Manipulator* CreateManipulator() const;
};



#endif
