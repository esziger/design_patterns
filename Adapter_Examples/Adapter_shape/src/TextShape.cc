/*
 * TextShape.cc
 *
 *  Created on: 26 maj 2016
 *      Author: esziger
 */

#include "TextShape.hh"

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

TextShape::TextShape(Point bottomLeft, Point topRight)
	//:TextView(0.0, 0.0, 10.0, 10.0)
	:TextView(bottomLeft.getX(), bottomLeft.getY(), topRight.getX()-bottomLeft.getX(), topRight.getY()-bottomLeft.getY())
{

}

TextShape::~TextShape()
{}

/*Manipulator* TextShape::CreateManipulator () const
{
	return new TextManipulator(this);
}*/
