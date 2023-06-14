#pragma once
#include "nguoi.h"

class casi : public nguoi
{
private:
	int sangtac;
	int gameshow;
public:
	casi();
	~casi();
	void nhap();
	void xuat();
	float thunhap();
	int get_sangtac();
	int get_gameshow();
};