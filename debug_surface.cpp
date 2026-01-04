#include <iostream>
#include "group.h"
#include "point.h"
#include "triangle.h"
#include "quadrilateral.h"

int main(){
    Group group;
    Point p1(0.0,0.0), p2(4.0,0.0), p3(0.0,3.0), p4(4.0,8.0), p5(4.0,0.0), p6(4.0,3.0), p7(0.0,3.0), p8(0.0,0.0);
    Triangle triangle1(p1,p2,p3);
    Quadrilateral quad1(p1,p2,p4,p3);
    group.add(triangle1);
    group.add(quad1);
    std::cout<<"After first add: surface="<<group.getSurface()<<"\n";
    std::cout<<"group: "<<group.toString()<<"\n";
    Quadrilateral quad2(p4,p5,p6,p8);
    Triangle triangle2(p8,p5,p7);
    group.add(quad2);
    group.add(triangle2);
    std::cout<<"After second add: surface="<<group.getSurface()<<"\n";
    std::cout<<"group: "<<group.toString()<<"\n";
    return 0;
}
