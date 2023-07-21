#include "LapTrinhVien.h"
ltv::ltv()
{
}
ltv::~ltv()
{
}
void ltv::nhap()
{
    Nv::nhap();
    cout << "So gio overtime: ";
    cin >> ot;
}
void ltv::xuat()
{
    Nv::xuat();
    cout << "So gio overtime: " << ot << "\n";
}
void ltv::luongltv()
{
    int n = getLuong() + ot * 200000;
    setLuong(n);
}