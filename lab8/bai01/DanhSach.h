#include "Hedaotao.h"

class DS
{
private:
    hdt **x;
    int n;
    int k[1000];

public:
    DS();
    ~DS();
    void nhapDS();
    void xuatDS();
    void TotNghiep();
    void KhongTotNghiep();
    void DH_DTBMax();
    void CD_DTBMax();
    void slsvKhongTotNghiep();
};
