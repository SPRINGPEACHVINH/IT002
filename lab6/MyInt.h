#include <iostream>

using namespace std;

class MYINT
{
private:
    int value;

public:
    MYINT();
    MYINT(int val);

    MYINT &operator=(const int &other);
    operator int() const;

    MYINT operator+(const MYINT &other) const;
    MYINT operator-(const MYINT &other) const;
    MYINT operator*(const MYINT &other) const;
    MYINT operator/(const MYINT &other) const;

    bool operator==(const MYINT &other) const;
    bool operator!=(const MYINT &other) const;
    bool operator<(const MYINT &other) const;
    bool operator<=(const MYINT &other) const;
    bool operator>(const MYINT &other) const;
    bool operator>=(const MYINT &other) const;
};