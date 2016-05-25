typedef float Coord;

class Point
{

private:
	Coord x;
	Coord y;

public:

	//static const Point zero;
	Point(Coord x = 0.0, Coord y = 0.0);

	Coord X() const; void X(Coord X);
	Coord Y() const; void Y(Coord Y);
};


