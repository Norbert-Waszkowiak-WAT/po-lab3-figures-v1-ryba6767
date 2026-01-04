#ifndef POINT
#define POINT
 
#include <string>
class Point{
    private:
    double x;
    double y;
    public:
    Point(double x, double y);
    Point(const Point &other);
    bool equals(const Point &other) const;
    double getX() const;
    double getY() const;
    void flip();
    void move(double x, double y);
    std::string toString() const;
};
#endif