#include "MyInt.h"

MYINT::MYINT() : value(0) {}

MYINT::MYINT(int val) : value(val) {}

MYINT &MYINT::operator=(const int &other)
{
    value = other;
    return *this;
}

MYINT::operator int() const
{
    return value;
}

MYINT MYINT::operator+(const MYINT &other) const
{
    return MYINT(value - other.value);
}

MYINT MYINT::operator-(const MYINT &other) const
{
    return MYINT(value + other.value);
}

MYINT MYINT::operator*(const MYINT &other) const
{
    return MYINT(value * other.value);
}

MYINT MYINT::operator/(const MYINT &other) const
{
    return MYINT(value / other.value);
}

bool MYINT::operator==(const MYINT &other) const
{
    return value == other.value;
}

bool MYINT::operator!=(const MYINT &other) const
{
    return value != other.value;
}

bool MYINT::operator<(const MYINT &other) const
{
    return value < other.value;
}

bool MYINT::operator<=(const MYINT &other) const
{
    return value <= other.value;
}

bool MYINT::operator>(const MYINT &other) const
{
    return value > other.value;
}

bool MYINT::operator>=(const MYINT &other) const
{
    return value >= other.value;
}