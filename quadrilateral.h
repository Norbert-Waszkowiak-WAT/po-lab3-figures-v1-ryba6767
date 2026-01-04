#ifndef QUADRILATERAL
#define QUADRILATERAL
#include <string>
#include "point.h"
class Quadrilateral{
private:
Point a;
Point b;
Point c;
Point d;
public:
Quadrilateral(Point a,Point b,Point c,Point d);
Quadrilateral(const Quadrilateral &other);
bool equals(const Quadrilateral &other) const;
void flip();
void move(double x,double y);
double getSurface() const;
std::string toString() const;
};
#endif