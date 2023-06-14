#define PI 3.14

class Circle
{
private:
    double centerX;
    double centerY;
    double radius;

public:
    Circle(double x, double y, double r);

    double getCenterX() const;
    double getCenterY() const;
    double getRadius() const;

    double calculateArea() const;
    double calculatePerimeter() const;
};