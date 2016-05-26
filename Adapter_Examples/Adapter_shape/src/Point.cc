#include "Point.hh"

Point::Point(Coord p_x, Coord p_y)
{
	x = p_x;
	y = p_y;
}

Coord
Point::getX() const
{
	return x;
}

void
Point::setX(Coord X)
{
	x = X;
}

Coord
Point::getY() const
{
	return y;
}

void
Point::setY(Coord Y)
{
	y = Y;
}
