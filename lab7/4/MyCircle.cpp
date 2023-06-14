#include "MyCircle.h"

Circle::Circle(double x, double y, double r) : centerX(x), centerY(y), radius(r) {}

double Circle::getCenterX() const
{
    return centerX;
}

double Circle::getCenterY() const
{
    return centerY;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::calculateArea() const
{
    return PI * radius * radius;
}

double Circle::calculatePerimeter() const
{
    return 2 * PI * radius;
}