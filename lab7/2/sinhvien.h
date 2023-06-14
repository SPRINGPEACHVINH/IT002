#pragma once
#include "nguoi.h"

class sinhvien :public nguoi
{
private:
	string mssv;
public:
	sinhvien();
	~sinhvien();
	void nhap();
	void xuat();
	string get_mssv();
};