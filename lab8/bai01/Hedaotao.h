#pragma once
#include <bits/stdc++.h>
using namespace std;
class hdt
{
private:
    int mssv;
    string name;
    string address;
    int tinchi;
    double dtb;

public:
    hdt();
    ~hdt();
    virtual void nhap();
    virtual void xuat();
    virtual bool XTN() = 0;
    double getDtb();
    int getTinchi();
};