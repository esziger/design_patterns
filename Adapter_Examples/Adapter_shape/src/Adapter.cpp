//============================================================================
// Name        : Adapter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <Point.hh>
#include <Shape.hh>

using namespace std;

class TextView
{
public:
	TextView();
	virtual ~TextView();
	void GetOrigin(Coord& x, Coord& y);
	void GetExtent(Coord& width, Coord& height) const;
	virtual bool isEmpty() const;
};

class TextShape : public Shape, private TextView
{
public:
	TextShape();

	virtual void BoundingBox(Point& bottomLeft, Point& topRight) const;

	virtual bool isEmpty() const;
	//virtual Manipulator* CreateManipulator() const;

};

void TextShape::BoundingBox(Point& bottomLeft, Point& topRight) const
{
	Coord bottom, left, width, height;

	GetOrigin(bottom, left);
	GetExtent(width, height);

	bottomLeft = Point(bottom, left);
	topRight = Point(bottom + height, left + width);

}

bool TextShape::isEmpty() const
{
	return TextView::isEmpty();
}

/*Manipulator* TextShape::CreateManipulator () const
{
	return new TextManipulator(this);
}*/


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
