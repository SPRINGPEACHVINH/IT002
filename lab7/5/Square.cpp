#include "Square.h"

Square::Square(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
    : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3), x4(x4), y4(y4) {}

double Square::getArea()
{
    double side = abs(x2 - x1);
    return side * side;
}

double Square::getPerimeter()
{
    double side1 = calculateSide(x1, x2, y1, y2);
    return side1 * 4;
}

bool Square::isParallelToXAxis()
{
    return (y1 == y2) && (y3 == y4) && (x1 == x3) && (calculateSide(x1, x2, y1, y2) == calculateSide(x1, x3, y1, y3));
}