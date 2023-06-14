#include "INTEGER.cpp"

int main()
{
    INTEGER a = 129;
    INTEGER b = 711;

    cout << "a = " << a << '\n';
    cout << "b = " << b << '\n';

    cout << "a + b = " << a + b << '\n';
    cout << "a - b = " << a - b << '\n';
    cout << "a * b = " << a * b << '\n';
    cout << "a / b = " << a / b << '\n';

    if (a == b)
    {
        cout << "a bang b" << '\n';
    }

    if (a != b)
    {
        cout << "a khong bang b" << '\n';
    }

    if (a < b)
    {
        cout << "a nho hon b" << '\n';
    }

    if (a <= b)
    {
        cout << "a nho hon hoac bang b" << '\n';
    }

    if (a > b)
    {
        cout << "a lon hon b" << '\n';
    }

    if (a >= b)
    {
        cout << "a lon hon hoac bang b" << '\n';
    }

    return 0;
}