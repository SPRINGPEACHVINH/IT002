#pragma once
#include "HonDon.h"

World::World(int linhkhi = 0, int tuchat = 0)
{
    this->linhkhi = linhkhi;
    this->tuchat = tuchat;
}
void World::nhap()
{
    int soluong = 0;
    string sl;
    int chisosm;
    cout << "Ten: ";
    cin >> name;
    cout << "Nhap linh khi va tu chat: ";
    cin >> linhkhi >> tuchat;
    cout << "Nhap so luong sinh linh can biet: ";
    cin >> soluong;
    if (soluong != 0)
    {
        for (int i = 0; i < soluong; i++)
        {
            cout << "Nhap sinh linh va chi so suc manh (vd: a 200 nghia la sinh linh a co chi so sm 200, co the nhap nhieu lan): ";
            cin >> sl;
            cin >> chisosm;
            sinhlinh.insert(make_pair(chisosm, sl));
        }
    }
}
void World::xuat()
{
    cout << "Ten: " << name << '\n';
    cout << "Phan loai: ";
    if (phanloai())
    {
        cout << "Thuong gioi" << '\n';
    }
    else
    {
        cout << "Ha gioi" << '\n';
    }
    cout << "Linh khi: " << linhkhi << '\n';
    cout << "Tu chat: " << tuchat << '\n';
    cout << "Tiem luc: " << chisosm(sinhlinh) << '\n';
}
int World::getLinhKhi()
{
    return linhkhi;
}
int World::getTuchat()
{
    return tuchat;
}
int TiemLuc::chiso(int linhkhi, int tuchat)
{
    return linhkhi + tuchat;
}
int TiemLuc::chisosm(map<int, string> &m)
{
    auto laste = m.rbegin();
    int lastk = laste->first;
    return lastk;
}
int World::tiemluc()
{
    return chisosm(sinhlinh);
}
bool World::phanloai()
{
    if (chiso(linhkhi, tuchat) > 20 || chisosm(sinhlinh) > 10000)
    {
        // chi so linh khi va tu chat tren 20, chi so sm tren 10000 nen k lay dau =
        return 1;
    }
    else
        return 0;
}
