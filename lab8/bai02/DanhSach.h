#include "NhanVien.h"
class ds
{
private:
    Nv **nv;
    int a[1000];
    int n;

public:
    ds();
    ~ds();
    void nhap();
    void xuat();
    int luongtrungbinh();
    void SmallerThanLTB();
    void nvLuongMax();
    void nvLuongMin();
    void ltvLuongMax();
    void kcvLuongMax();
};