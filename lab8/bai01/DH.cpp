#include "DH.h"
DaiHoc::DaiHoc()
{
}

DaiHoc::~DaiHoc()
{
}

void DaiHoc::nhap()
{
    hdt::nhap();
    cin.ignore();
    cout << "Ten luan van: ";
    getline(cin, tenlv);
    cout << "Diem luan van: ";
    cin >> dlv;
}

void DaiHoc::xuat()
{
    hdt::xuat();
    cout << "Ten luan van: " << tenlv << '\n';
    cout << "Diem luan van: " << dlv << '\n';
}

bool DaiHoc::XTN()
{
    if (getTinchi() >= 170 && getDtb() >= 5 && dlv >= 5)
        return 1;
    else
        return 0;
}
