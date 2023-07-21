#include "CD.h"

CaoDang::CaoDang()
{
}

CaoDang::~CaoDang()
{
}

void CaoDang::nhap()
{
    hdt::nhap();
    cout << "Diem thi tot nghiep: ";
    cin >> dtn;
}

void CaoDang::xuat()
{
    hdt::xuat();
    cout << "Diem thi tot nghiep: " << dtn << '\n';
}

bool CaoDang::XTN()
{
    if (getTinchi() >= 120 && getDtb() >= 5 && dtn >= 5)
        return 1;
    else
        return 0;
}
