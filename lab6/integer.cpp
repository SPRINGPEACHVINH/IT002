#include "integer.h"

INTEGER::INTEGER() : value(0) {}

INTEGER::INTEGER(int val) : value(val) {}

INTEGER &INTEGER::operator=(const int &other)
{
    value = other;
    return *this;
}

INTEGER::operator int() const
{
    return value;
}

INTEGER INTEGER::operator+(const INTEGER &other) const
{
    return INTEGER(value + other.value);
}

INTEGER INTEGER::operator-(const INTEGER &other) const
{
    return INTEGER(value - other.value);
}

INTEGER INTEGER::operator*(const INTEGER &other) const
{
    return INTEGER(value * other.value);
}

INTEGER INTEGER::operator/(const INTEGER &other) const
{
    return INTEGER(value / other.value);
}

bool INTEGER::operator==(const INTEGER &other) const
{
    return value == other.value;
}

bool INTEGER::operator!=(const INTEGER &other) const
{
    return value != other.value;
}

bool INTEGER::operator<(const INTEGER &other) const
{
    return value < other.value;
}

bool INTEGER::operator<=(const INTEGER &other) const
{
    return value <= other.value;
}

bool INTEGER::operator>(const INTEGER &other) const
{
    return value > other.value;
}

bool INTEGER::operator>=(const INTEGER &other) const
{
    return value >= other.value;
}