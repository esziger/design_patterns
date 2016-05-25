#include <Point.hh>


Point::Point(Coord p_x, Coord p_y)
{
	x = p_x;
	y = p_y;
}

Coord Point::X() const
{
	return x;
}

Coord Point::Y() const
{
	return y;
}
