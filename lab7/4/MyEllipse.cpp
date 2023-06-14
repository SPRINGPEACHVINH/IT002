#include "MyEllipse.h"

Ellipse::Ellipse(double major, double minor) : semiMajorAxis(major), semiMinorAxis(minor) {}

double Ellipse::getMajorAxis() const
{
    return semiMajorAxis;
}

double Ellipse::getMinorAxis() const
{
    return semiMinorAxis;
}