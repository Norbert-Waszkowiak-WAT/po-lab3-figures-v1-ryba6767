#ifndef GROUP
#define GROUP
#include "line.h"
#include "triangle.h"
#include "quadrilateral.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Group{
    private:
    std::vector<Line> lines;
    std::vector<Triangle> triangles;
    std::vector<Quadrilateral> quadrilaterals;
    public:
    Group();
    Group(const Group &other);
    bool equals(const Group &other) const;
    void remove(Line t);
    void remove(Triangle t);
    void remove(Quadrilateral t);
    void add(Line t);
    void add(Triangle t);
    void add(Quadrilateral t);
    void flip();
    double getSurface();
    void move(double x, double y);
    std::string toString() const;
};
#endif
