#pragma once
#include "luong.h"

NhanVien::NhanVien(string Hoten, string ngaysinh, int luong)
{
    this->Hoten = Hoten;
    this->ngaysinh = ngaysinh;
    this->luong = luong;
}

string NhanVien::getHoten()
{
    return Hoten;
}
string NhanVien::getNgaysinh()
{
    return ngaysinh;
}
int NhanVien::getLuong()
{
    return luong;
}

void NhanVien::setLuong(int l)
{
    this->luong = l;
}

void NhanVien::xuatThongTin()
{
    cout << "Ho ten: " << Hoten << endl;
    cout << "Ngay sinh: " << ngaysinh << endl;
    cout << "Luong: " << luong << endl;
}

NhanVienSanXuat::NhanVienSanXuat(string ten, string ngay, int l, int Sosanpham) : NhanVien(ten, ngay, l)
{
    this->Sosanpham = Sosanpham;
}

void NhanVienSanXuat::tinhLuong()
{
    int l = getLuong() + Sosanpham * 5000;
    setLuong(l);
}

NhanVienVanPhong::NhanVienVanPhong(string ten, string ngay, int l, int ngaylamviec) : NhanVien(ten, ngay, l)
{
    this->ngaylamviec = ngaylamviec;
}

void NhanVienVanPhong::tinhLuong()
{
    int l = ngaylamviec * 100000;
    setLuong(l);
}

