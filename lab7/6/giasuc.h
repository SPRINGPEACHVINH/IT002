#pragma once
#include "iostream"
#include "string.h"
using namespace std;

class giasuc
{
protected:
	string tiengkeu;
	int soluong;
public:
	giasuc()
	{

	}
	giasuc(int a)  {soluong=a;};
	~giasuc()
	{

	}
	virtual int sinhcon() = 0;
	virtual void keu()
	{
		cout << tiengkeu << endl;
	}
	virtual int cho_sua() = 0;
};