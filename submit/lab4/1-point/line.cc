#include<cmath>
#include<string>
#include<sstream>
#include "line.hh"
#include "point.hh"

double line::length() const{	
	double dist = (double) x.distance(y);
	return dist;
}

std::string line::toString() const{
	std::stringstream s;
	s << "(" << x.toString() << ", " << y.toString() << ")" << " length = " << this -> length();
	return s.str();
}
