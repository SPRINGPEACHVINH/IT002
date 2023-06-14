#include "CVector.h"

CVector::CVector(int dimension) : components(dimension, 0.0) {}
CVector::CVector(int dimension, const vector<double> &values) : components(values)
{
    if (values.size() != dimension)
    {
        cout << "Kich thuoc cac thanh phan khong khop voi so chieu." << endl;
        components = vector<double>(dimension, 0.0);
    }
}

int CVector::getDimension() const
{
    return components.size();
}

double CVector::getComponent(int index) const
{
    if (index >= 0 && index < components.size())
        return components[index];
    else
    {
        cout << "Vector khong co chieu nay." << endl;
        return 0.0;
    }
}

void CVector::setComponent(int index, double value)
{
    if (index >= 0 && index < components.size())
        components[index] = value;
    else
        cout << "Vector khong co chieu nay." << endl;
}

double CVector::length() const
{
    double sum = 0.0;
    for (double component : components)
    {
        sum += component * component;
    }
    return sqrt(sum);
}

CVector CVector::operator+(const CVector &other) const
{
    if (components.size() != other.components.size())
    {
        cout << "2 vector khong co cung so chieu." << endl;
        return CVector(0);
    }

    vector<double> resultComponents(components.size());
    for (int i = 0; i < components.size(); i++)
    {
        resultComponents[i] = components[i] + other.components[i];
    }

    return CVector(components.size(), resultComponents);
}

CVector CVector::operator-(const CVector &other) const
{
    if (components.size() != other.components.size())
    {
        cout << "2 vector khong co cung so chieu." << endl;
        return CVector(0);
    }

    vector<double> resultComponents(components.size());
    for (int i = 0; i < components.size(); i++)
    {
        resultComponents[i] = components[i] - other.components[i];
    }

    return CVector(components.size(), resultComponents);
}

CVector CVector::operator*(double scalar) const
{
    vector<double> resultComponents(components.size());
    for (int i = 0; i < components.size(); i++)
    {
        resultComponents[i] = components[i] * scalar;
    }

    return CVector(components.size(), resultComponents);
}

istream &operator>>(istream &is, CVector &vector)
{
    int dimension = vector.getDimension();

    cout << "Nhap gia tri vector:" << endl;
    for (int i = 0; i < dimension; i++)
    {
        double value;
        cout << "Nhap phan tu thu " << i << ": ";
        is >> value;
        vector.setComponent(i, value);
    }

    return is;
}

ostream &operator<<(ostream &os, const CVector &vector)
{
    os << "(";
    for (int i = 0; i < vector.components.size(); i++)
    {
        os << vector.components[i];
        if (i != vector.components.size() - 1)
            os << ", ";
    }
    os << ")";
    return os;
}