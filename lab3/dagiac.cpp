#include "headerDaGiac.h"
DaGiac::DaGiac(int dinh = 0)
{
    this->dinh = dinh;
}
void DaGiac::nhap()
{
    int n;
    cout << "Nhap so dinh da giac: ";
    cin >> n;
    p.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap dinh thu " << i + 1 << ": ";
        p[i].nhap();
    }
}
void DaGiac::xuat()
{
    cout<<"Da giac co "<<p.size()<<" dinh:";
    for (int i = 0; i < p.size(); i++)
    {
        p[i].xuat();
    }
}
void DaGiac::draw()
{
    int n = p.size();
    for (int i = 0; i < n - 1; i++)
    {
        line(p[i].getX(), p[i].getY(), p[i + 1].getX(), p[i + 1].getY());
    }
    line(p[n - 1].getX(), p[n - 1].getY(), p[0].getX(), p[0].getY());
}
void DaGiac::TinhTien(int dx, int dy)
{
    for (int i = 0; i < p.size(); i++)
    {
        p[i].TinhTien(dx, dy);
    }
    xuat();
}
void DaGiac::ZoomIn(double k) {
    Point G(375,375);
    for(int i=0; i < p.size(); i++) {
        p[i].setX(G.getX() + (p[i].getX() - G.getX()) * k);
        p[i].setY(G.getY() + (p[i].getY() - G.getY()) * k);
    }
    xuat();
}
void DaGiac::ZoomOut(double k) {
    k=1/k;
    ZoomIn(k);
    xuat();
}
void DaGiac::xoay(double goc) {
    goc=(goc*M_PI)/180.0;
    for(int i=0; i<p.size(); i++) {
        p[i].setX(p[i].getX() * cos(goc) + p[i].getY() * sin(goc));
        p[i].setY(p[i].getY() * cos(goc) + p[i].getX() * sin(goc));
    }
    xuat();
}