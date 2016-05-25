#include <Point.hh>

class Shape
{
public:
	Shape();
	virtual ~Shape();
	virtual void BoundingBox(Point& bottomLeft, Point& topRight) const;
	//create Manipulator object, which knows how to animate a shape when the user manipulates it.
	//virtual Manipulator* CreateManipulator() const;
};
