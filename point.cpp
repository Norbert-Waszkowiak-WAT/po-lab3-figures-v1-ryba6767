#include "point.h"
#include <sstream>
#include <iomanip>
 
Point:: Point(double x, double y): x(x), y(y){}
Point:: Point(const Point &other): x(other.x), y(other.y){}
 
void Point:: flip(){
x= -x;
y= -y;
}
void Point:: move(double x,double y ){
    this -> x += x;
    this -> y += y;
}
std:: string Point:: toString() const {
    std:: ostringstream oss;
    oss << std:: fixed << std:: setprecision(1);
    oss << "Point(" << x << ", " << y << ")";
    return oss.str();
}
bool Point:: equals(const Point &other) const {
    return x == other.x && y == other.y;
}
double Point:: getX() const {
    return x;
}
double Point:: getY() const {
    return y;
}