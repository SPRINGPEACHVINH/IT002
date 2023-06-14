#include <bits/stdc++.h>
using namespace std;

class TiemLuc
{
public:
    int chiso(int, int);
    int chisosm(map<int, string> &);
};

class World : public TiemLuc
{
private:
    string name;
    int linhkhi;
    int tuchat;
    map<int, string> sinhlinh;

public:
    World(int, int);
    void nhap();
    void xuat();
    int getLinhKhi();
    int getTuchat();
    bool phanloai();
    int tiemluc();
};
