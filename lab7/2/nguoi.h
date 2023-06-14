#pragma once
#include "iostream"
#include "string"
using namespace std;

class nguoi
{
protected:
	string hoten;
	string ngaysinh;
public:
	nguoi();
	~nguoi();
	virtual void nhap();
	virtual void xuat();
};