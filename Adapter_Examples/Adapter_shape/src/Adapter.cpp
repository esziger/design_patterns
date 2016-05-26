//============================================================================
// Name        : Adapter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Point.hh"
#include "Shape.hh"
#include "TextView.hh"
#include "TextShape.hh"

using namespace std;


int main() {


	Shape* textShape = new TextShape(Point(0,0),Point(10,10));

	Point bottomLeft;
	Point topRight;

	textShape->BoundingBox(bottomLeft,topRight);

	cout<< "TextShape BoundingBox bottomLeft coord is: ("<< bottomLeft.getX()<<","<< bottomLeft.getY() << ")." <<endl;
	cout<< "TextShape BoundingBox bottomRight coord is: ("<< topRight.getX()<<","<< topRight.getY() << ")." <<endl;

	return 0;
}
