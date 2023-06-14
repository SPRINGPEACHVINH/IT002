#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class CVector
{
private:
    vector<double> components;

public:
    CVector(int dimension);
    CVector(int dimension, const vector<double> &values);

    int getDimension() const;
    double getComponent(int index) const;
    void setComponent(int index, double value);
    double length() const;

    CVector operator+(const CVector &other) const;
    CVector operator-(const CVector &other) const;
    CVector operator*(double scalar) const;
    
    friend istream &operator>>(istream &is, CVector &vector);
    friend ostream &operator<<(ostream &os, const CVector &vector);
};