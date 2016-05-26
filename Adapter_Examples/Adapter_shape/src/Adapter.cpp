//============================================================================
// Name        : Adapter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

#include "Point.hh"
#include "Shape.hh"
#include "TextView.hh"
#include "TextShape.hh"

using namespace std;

void printShapeDetails(Shape* textShape)
{
	Point bottomLeft;
	Point topRight;

	textShape->BoundingBox(bottomLeft,topRight);

	cout << textShape->getName() <<" BoundingBox bottomLeft coord is: ("<< bottomLeft.getX()<<","<< bottomLeft.getY() << ")." <<endl;
	cout << textShape->getName() <<" BoundingBox bottomRight coord is: ("<< topRight.getX()<<","<< topRight.getY() << ")." <<endl;
}

int main() {

	vector<Shape*> shapes;

	Shape* textShape = new TextShape(Point(0,0),Point(10,10));
	shapes.push_back(textShape);

	//shapes.push_back(new LineShape(Point(5,5), Point(7,5,5)));

	for(vector<Shape*>::iterator it = shapes.begin();
		it != shapes.end();
		it++)
	{
		printShapeDetails(*it);
	}

	return 0;
}
