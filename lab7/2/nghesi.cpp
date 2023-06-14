#pragma once
#include "nghesi.h"

int nghesi::get_so_tp()
{
	return sotacpham;
}
void nghesi::nhap()
{
	nguoi::nhap();
	cout << "nhap so tac pham: ";
	cin >> sotacpham;
}
void nghesi::xuat()
{
	nguoi::xuat();
	cout << "so tac pham: " << sotacpham << endl;
	cout << "so thanh tuu: " << (int)sotacpham / 10 << endl;
}