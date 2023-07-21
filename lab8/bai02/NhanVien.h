#pragma once
#include <bits/stdc++.h>
using namespace std;
class Nv
{
private:
    int mnv;
    string name;
    int age;
    int sdt;
    string email;
    int luong;

public:
    Nv();
    ~Nv();
    int getLuong();
    void setLuong(int);
    void nhap();
    void xuat();
};