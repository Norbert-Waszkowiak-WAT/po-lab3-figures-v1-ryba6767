#include "triangle.h"
#include <sstream>
#include <iomanip>
#include <cmath>

Triangle::Triangle(Point a,Point b,Point c)
:a(a),b(b),c(c){}
Triangle::Triangle(const Triangle &other)
:a(other.a), b(other.b), c(other.c){}
bool Triangle:: equals(const Triangle &other) const {
    return a.equals(other.a) && b.equals(other.b) && c.equals(other.c);
}
void Triangle:: flip(){
    a.flip();
    b.flip();
    c.flip();
}
void Triangle:: move(double x,double y){
    a.move(x, y);
    b.move(x, y);
    c.move(x, y);
}
double Triangle:: getSurface() const {
    double a=sqrt(pow(this->c.getX()-this->b.getX(),2)+(pow(this->c.getY()-this->b.getY(),2)));
    double b=sqrt(pow(this->c.getX()-this->a.getX(),2)+(pow(this->c.getY()-this->a.getY(),2)));
    double c=sqrt(pow(this->b.getX()-this->a.getX(),2)+(pow(this->b.getY()-this->a.getY(),2)));
    double p=0.5*(a+b+c);
    return sqrt(p*(p-a)*(p-b)*(p-c));

} 
std::string Triangle:: toString() const {
    std::ostringstream oss;
    oss << "Triangle(" << a.toString() << ", " << b.toString() <<", "<< c.toString() << ")";
    return oss.str();
}