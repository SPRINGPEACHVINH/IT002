#include "NhanVien.h"
Nv::Nv()
{
}
Nv::~Nv()
{
}
void Nv::nhap()
{
    cout << "Ma nhan vien: ";
    cin >> mnv;
    cin.ignore();
    cout << "Ho va ten: ";
    getline(cin, name);
    cout << "Tuoi: ";
    cin >> age;
    cout << "Sdt: ";
    cin >> sdt;
    cin.ignore();
    cout << "email: ";
    getline(cin, email);
    cout << "Luong: ";
    cin >> luong;
}
void Nv::xuat()
{
    cout << "Ma nhan vien: " << mnv << '\n';
    cout << "Ho va ten: " << name << '\n';
    cout << "Tuoi " << age << '\n';
    cout << "Sdt: " << sdt << '\n';
    cout << "email: " << email << '\n';
    cout << "Luong: " << luong << '\n';
}
int Nv::getLuong()
{
    return luong;
}
void Nv::setLuong(int luong)
{
    this->luong = luong;
}