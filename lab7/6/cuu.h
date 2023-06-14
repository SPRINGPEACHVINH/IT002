#pragma once
#include "giasuc.h"

class cuu : public giasuc
{
public:
	cuu(int a) : giasuc(a)
	{
		soluong = a;
		tiengkeu = "con cuu` dang keu^";
	}
	int get_soluong();
	int sinhcon();
	int cho_sua();

};