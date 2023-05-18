#include "phanso.cpp"
int main()
{
    phanso s1, s2, Calculate;
    cout << "Nhap phan so thu 1: ";
    s1.nhap();
    cout << "Nhap phan so thu 2: ";
    s2.nhap();
    cout << "Phan so thu 1 sau khi rut gon: ";
    s1.rutgon();
    cout << endl;
    cout << "Phan so thu 2 sau khi rut gon: ";
    s2.rutgon();
    Calculate.sosanh(s1, s2);
    cout << endl
         << "Tong hai phan so: ";
    Calculate.tong(s1, s2);
    cout << endl
         << "Hieu hai phan so: ";
    Calculate.hieu(s1, s2);
    cout << endl
         << "Tich hai phan so: ";
    Calculate.tich(s1, s2);
    cout << endl
         << "Thuong hai phan so: ";
    Calculate.thuong(s1, s2);
}