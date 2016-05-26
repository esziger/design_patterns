/*
 * TextView.cc
 *
 *  Created on: 26 maj 2016
 *      Author: esziger
 */

#include "TextView.hh"

TextView::TextView(Coord pX, Coord pY, Coord pWidth, Coord pHeight)
	:x(pX),y(pY),width(pWidth),height(pHeight)
	{}

TextView::~TextView()
{}

void
TextView::GetOrigin(Coord& x, Coord& y) const
{
	x = this->x;
	y = this->y;
}

void
TextView::GetExtent(Coord& width, Coord& height) const
{
	width = this->width;
	height = this->height;
}

bool
TextView::isEmpty() const
{
	return false;
}

