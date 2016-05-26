
#ifndef POINT_HH_
#define POINT_HH_

typedef float Coord;

class Point
{

private:
	Coord x;
	Coord y;

public:

	Point(Coord x = 0.0, Coord y = 0.0);

	Coord getX() const;
	void setX(Coord X);

	Coord getY() const;
	void setY(Coord Y);
};


#endif /* POINT_HH_ */
