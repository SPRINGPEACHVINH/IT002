#include "Parallelogram.h"

Parallelogram::Parallelogram(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
    : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3), x4(x4), y4(y4) {}

double Parallelogram::getArea()
{
    double base = abs(x2 - x1);
    double height = abs(y3 - y1);
    return base * height;
}

double Parallelogram::getPerimeter()
{
    double side1 = calculateSide(x1, x2, y1, y2);
    double side2 = calculateSide(x2, x3, y2, y3);
    double side3 = calculateSide(x3, x4, y3, y4);
    double side4 = calculateSide(x4, x1, y4, y1);
    return side1 + side2 + side3 + side4;
}

bool Parallelogram::isParallelToXAxis()
{
    return (y1 == y2) && (y3 == y4);
}