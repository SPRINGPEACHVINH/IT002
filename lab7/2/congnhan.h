#pragma once
#include "nguoi.h"

class congnhan : public nguoi
{
private:
	int ngaylam;
public:
	congnhan();
	~congnhan();
	void nhap();
	void xuat();
	int luong();
};