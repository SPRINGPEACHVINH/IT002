#ifndef Shape_h
#define Shape_h
#include <iostream>
#include <cmath>

using namespace std;

double calculateSide(double x1, double x2, double y1, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

class Shape
{
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    virtual bool isParallelToXAxis() = 0;
};
#endif