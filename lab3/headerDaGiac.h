#include "point.cpp"
class DaGiac
{
private:
    vector<Point> p;
    int dinh;
public:
    DaGiac(int);
    void nhap();
    void xuat();
    void draw();
    void TinhTien(int, int);
    void xoay(double);
    void ZoomIn(double);
    void ZoomOut(double);
};
