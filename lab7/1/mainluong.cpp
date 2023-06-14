#include "luong.cpp"
int main()
{
    NhanVienSanXuat nvsx("ABC", "01/01/2004", 50000, 100);
    nvsx.tinhLuong();
    nvsx.xuatThongTin();

    NhanVienVanPhong nvvp("NTLA", "02/02/2004", 1, 20);
    nvvp.tinhLuong();
    nvvp.xuatThongTin();

    return 0;
}