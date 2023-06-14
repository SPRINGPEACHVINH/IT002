#pragma once
#include "nguoi.h"

class nghesi : public nguoi
{
private:
	int sotacpham;
public:
	nghesi();
	~nghesi();
	void nhap();
	void xuat();
	int get_so_tp();
};