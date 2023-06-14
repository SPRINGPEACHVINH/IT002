#include "Shape.h"

class Rectangle : public Shape
{
private:
    double x1, y1, x2, y2, x3, y3, x4, y4;

public:
    Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);

    double getArea() override;
    double getPerimeter() override;
    bool isParallelToXAxis() override;
};