#pragma once
#include "congnhan.h"

void congnhan::nhap()
{
	nguoi::nhap();
	cout << "nhap so ngay di lam: ";
	cin >> ngaylam;
}
int congnhan::luong()
{
	return 5000 * ngaylam;
}
void congnhan::xuat()
{
	nguoi::xuat();
	cout << "so ngay di lam: " << ngaylam<<endl;
	cout << "luong: " << luong()<<endl;
}