#pragma once
#include "giasuc.h"

class de : public giasuc
{
public:
	de(int a) : giasuc(a)
	{
		soluong = a;
		tiengkeu = "con de^ dang keu^";
	}
	int get_soluong();
	int sinhcon();
	int cho_sua();

};