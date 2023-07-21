#include "KiemChungVien.h"
kcv::kcv()
{
}
kcv::~kcv()
{
}
void kcv::nhap()
{
    Nv::nhap();
    cout << "So loi: ";
    cin >> error;
}
void kcv::xuat()
{
    Nv::xuat();
    cout << "So loi: " << error << '\n';
}
void kcv::luongkcv()
{
    int n = getLuong() + error * 50000;
    setLuong(n);
}