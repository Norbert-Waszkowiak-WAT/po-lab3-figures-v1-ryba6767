#include <iostream>
#include "point.h"
#include "triangle.h"
#include "quadrilateral.h"

int main(){
    Point p1(0.0,0.0), p2(4.0,0.0), p3(0.0,3.0), p4(4.0,8.0), p5(4.0,0.0), p6(4.0,3.0), p7(0.0,3.0), p8(0.0,0.0);
    Triangle triangle1(p1,p2,p3);
    Quadrilateral quad1(p1,p2,p4,p3);
    Quadrilateral quad2(p4,p5,p6,p8);
    Triangle triangle2(p8,p5,p7);
    std::cout<<"triangle1="<<triangle1.getSurface()<<"\n";
    std::cout<<"quad1="<<quad1.getSurface()<<"\n";
    std::cout<<"quad2="<<quad2.getSurface()<<"\n";
    std::cout<<"triangle2="<<triangle2.getSurface()<<"\n";
    return 0;
}
