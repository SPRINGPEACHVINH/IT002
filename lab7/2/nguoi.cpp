#pragma once
#include "nguoi.h"

void nguoi::nhap()
{	
	cin.ignore();
	cout << "nhap ho ten: ";
	getline(cin, hoten);
	cout << "nhap ngay sinh: ";
	getline(cin, ngaysinh);
}

void nguoi::xuat()
{
	cout << "ho ten: " << hoten << endl;
	cout << "ngay sinh: " << ngaysinh << endl;

}