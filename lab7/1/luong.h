#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
private:
    string Hoten;
    string ngaysinh;
    int luong;

public:

    NhanVien(string, string, int );

    string getHoten();
    string getNgaysinh();
    int getLuong();
    void setLuong(int l);
    virtual void tinhLuong() = 0;
    void xuatThongTin();
};

class NhanVienSanXuat : public NhanVien
{
private:
    int Sosanpham;

public:
    NhanVienSanXuat(string, string, int, int);
    void tinhLuong();
};

class NhanVienVanPhong : public NhanVien
{
private:
    int ngaylamviec;

public:
    NhanVienVanPhong(string , string , int , int );
    void tinhLuong();
};
