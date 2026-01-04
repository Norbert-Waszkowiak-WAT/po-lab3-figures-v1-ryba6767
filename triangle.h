#ifndef TRIANGLE
#define TRIANGLE
#include <string>
#include "point.h"
class Triangle{
private:
Point a;
Point b;
Point c;
public:
Triangle(Point a,Point b,Point c);
Triangle(const Triangle &other);
bool equals(const Triangle &other) const;
void flip();
void move(double x,double y);
double getSurface() const;
std::string toString() const;
};
#endif