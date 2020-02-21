#ifndef LINE_HH_
#define LINE_HH_

#include <string>
#include "point.hh"

class line{
	public:
	
	const Point x,y;
	line(Point x =(0,0), Point y =(0,0)): x(x), y(y) {}
	double length() const;
	std::string toString() const;
};

#endif
