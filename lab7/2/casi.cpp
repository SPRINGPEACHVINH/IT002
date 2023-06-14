#pragma once
#include "casi.h"

void casi::nhap()
{
	nguoi::nhap();
	cout << "nhap so sang tac: ";
	cin >> sangtac;
	cout << "nhap so gameshow tham gia: ";
	cin >> gameshow;
}
float casi::thunhap()
{
	return (float)sangtac * 10 + gameshow * 20;
}
void casi::xuat()
{
	nguoi::xuat();
	cout << "so sang tac: " << sangtac << endl;
	cout << "so game show tham gia: " << gameshow << endl;
	cout << "thu nhap: " <<thunhap();
}
int casi::get_sangtac()
{
	return sangtac;
}
int casi::get_gameshow()
{
	return gameshow;
}
