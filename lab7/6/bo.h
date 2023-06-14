#pragma once
#include "giasuc.h"

class bo : public giasuc
{
public:
	bo(int a) : giasuc(a)
	{	
		soluong = a;
		tiengkeu = "Boooooooo!";
	}
	int get_soluong();
	int sinhcon();
	int cho_sua();
	
};