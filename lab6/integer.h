#include <iostream>

using namespace std;

class INTEGER
{
private:
    int value;

public:
    INTEGER();
    INTEGER(int val);

    INTEGER &operator=(const int &other);
    operator int() const;

    INTEGER operator+(const INTEGER &other) const;
    INTEGER operator-(const INTEGER &other) const;
    INTEGER operator*(const INTEGER &other) const;
    INTEGER operator/(const INTEGER &other) const;

    bool operator==(const INTEGER &other) const;
    bool operator!=(const INTEGER &other) const;
    bool operator<(const INTEGER &other) const;
    bool operator<=(const INTEGER &other) const;
    bool operator>(const INTEGER &other) const;
    bool operator>=(const INTEGER &other) const;
};