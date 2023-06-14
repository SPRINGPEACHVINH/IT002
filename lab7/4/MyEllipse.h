class Ellipse
{
protected:
    double semiMajorAxis;
    double semiMinorAxis;

public:
    Ellipse(double major, double minor);

    double getMajorAxis() const;
    double getMinorAxis() const;

    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};