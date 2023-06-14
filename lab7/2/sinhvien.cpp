#pragma once
#include "sinhvien.h"

void sinhvien::nhap()
{
	nguoi::nhap();
	cout << "nhap mssv: ";
	getline(cin, mssv);
}

void sinhvien::xuat()
{
	nguoi::xuat();
	cout << "mssv: " << mssv;
}