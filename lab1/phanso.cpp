#include <bits/stdc++.h> 
using namespace std;
int ucln(int a, int b)
{
    a=abs(a);
    b=abs(b);
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
public:
    int tu, mau;
    phanso()
    {
    }
    phanso(int tu, int mau)
    {
        this->tu = tu;
        this->mau = mau;
    }
    void nhap()
    {
        cout << "Nhap tu: ";
        cin >> tu;
        cout << "Nhap mau: ";
        cin >> mau;
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
        a.tu*=b.mau;
        b.tu*=a.mau;
        if (a.tu > b.tu)
        {
            cout << "Phan so lon hon la: ";
            a.display();
        }
        else if (a.tu < b.tu)
        {
            cout << "Phan so lon hon la: ";
            b.display();
        }
        else
            cout << "Hai phan so bang nhau" << endl;
    }
    void display()
    {
        cout << tu << "/" << mau;
    }
    void tong(phanso a, phanso b)
    {
        phanso sum;
        sum.mau = a.mau*b.mau;
        sum.tu = a.tu * b.mau + b.tu * a.mau;
        sum.rutgon();
    }
    void hieu(phanso a, phanso b)
    {
        phanso minus;
        minus.mau = a.mau*b.mau;
        minus.tu = a.tu * b.mau - b.tu * a.mau;
        minus.rutgon();
    }
    void tich(phanso a, phanso b)
    {
        phanso mul(a.tu * b.tu, a.mau * b.mau);
        mul.rutgon();
    }
    void thuong(phanso a, phanso b)
    {
        phanso divide(a.tu * b.mau, a.mau * b.tu);
        divide.rutgon();
    }
};
