#include <bits/stdc++.h>
using namespace std;
int ucln(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a != 0 && b != 0)
    {
        (a > b) ? a = a % b : b = b % a;
    }
    if (a > b)
        return a;
    return b;
}
class phanso
{
private:
    int tu, mau;

public:
    phanso(int tu = 0, int mau = 0)
    {
        this->tu = tu;
        this->mau = mau;
    }
    friend istream &operator>>(istream &is, phanso &p)
    {
        cout << "Nhap tu: ";
        is >> p.tu;
        cout << "Nhap mau: ";
        is >> p.mau;
        return is;
    }
    friend ostream &operator<<(ostream &os, phanso &p)
    {
        os << p.tu << "/" << p.mau;
        return os;
    }
    void rutgon()
    {
        int a = tu;
        tu /= ucln(tu, mau);
        mau /= ucln(a, mau);
        cout << tu << "/" << mau;
    }
    void sosanh(phanso a, phanso b)
    {
        cout << endl;
        a.tu *= b.mau;
        b.tu *= a.mau;
        if (a.tu > b.tu)
        {
            cout << "Phan so lon hon la: ";
            cout << a;
        }
        else if (a.tu < b.tu)
        {
            cout << "Phan so lon hon la: ";
            cout << b;
        }
        else
            cout << "Hai phan so bang nhau" << endl;
    }
    phanso operator+(phanso &p)
    {
        phanso sum(tu * p.mau + p.tu * mau, mau * p.mau);
        sum.rutgon();
    }
    phanso operator-(phanso &p)
    {
        phanso minus(tu * p.mau - p.tu * mau, mau * p.mau);
        minus.rutgon();
    }
    phanso operator*(phanso &p)
    {
        phanso mul(tu * p.tu, mau * p.mau);
        mul.rutgon();
    }
    phanso operator/(phanso &p)
    {
        phanso divide(tu * p.mau, mau * p.tu);
        divide.rutgon();
    }
};
