#include "Hedaotao.h"
hdt::hdt()
{
}
hdt::~hdt()
{
}
void hdt::nhap()
{
    cout << "MSSV: ";
    cin >> mssv;
    cin.ignore();
    cout << "Ho va ten: ";
    getline(cin, name);
    cout << "Dia chi: ";
    getline(cin, address);
    cout << "Tong so tin chi: ";
    cin >> tinchi;
    cout << "Diem trung binh: ";
    cin >> dtb;
}
void hdt::xuat()
{
    cout << "MSSV" << mssv << '\n';
    cout << "Ho va ten: " << name << '\n';
    cout << "Dia chi: " << address << '\n';
    cout << "Tong so tin chi: " << tinchi << '\n';
    cout << "Diem trung binh: " << dtb << '\n';
}
double hdt::getDtb()
{
    return dtb;
}
int hdt::getTinchi()
{
    return tinchi;
}
