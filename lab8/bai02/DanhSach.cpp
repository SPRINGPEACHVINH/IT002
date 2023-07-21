#include "DanhSach.h"
#include "LapTrinhVien.cpp"
#include "KiemChungVien.cpp"
ds::ds()
{
    int n = 0;
    nv = new Nv *[1000];
}
ds::~ds()
{
    delete[] nv;
}
void ds::nhap()
{
    cout << "So luong nhan vien: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        do
        {
            cout << "Loai nhan vien:\n 1.Lap trinh vien\n 2.Kiem chung vien "
                 << "\n ";
            cin >> a[i];
            if (a[i] != 1 && a[i] != 2)
            {
                cout << "Loi";
                break;
            }
        } while (a[i] == 1 && a[i] == 2);

        if (a[i] == 1)
        {
            nv[i] = new ltv;
            ((ltv *)nv[i])->nhap();
            ((ltv *)nv[i])->luongltv();
        }
        else
        {
            nv[i] = new kcv;
            ((kcv *)nv[i])->nhap();
            ((kcv *)nv[i])->luongkcv();
        }
    }
}
void ds::xuat()
{
    cout << "Danh sach nhan vien: " << '\n';
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            ((ltv *)nv[i])->xuat();
        }
        else
        {
            ((kcv *)nv[i])->xuat();
        }
        cout << '\n';
    }
}
int ds::luongtrungbinh()
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            temp += ((ltv *)nv[i])->getLuong();
        }
        else
        {
            temp += ((kcv *)nv[i])->getLuong();
        }
    }
    return temp / n;
}
void ds::SmallerThanLTB()
{
    cout << "Danh sach nhan vien co luong thap hon luong trung binh: " << '\n';
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            if (((ltv *)nv[i])->getLuong() < luongtrungbinh())
            {
                ((ltv *)nv[i])->xuat();
            }
        }
        else
        {
            if (((kcv *)nv[i])->getLuong() < luongtrungbinh())
            {
                ((kcv *)nv[i])->xuat();
            }
        }
    }
}
void ds::nvLuongMax()
{
    int temp1 = 0, temp = 0;
    cout << "Nhan vien co luong cao nhat la: " << '\n';
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            if (((ltv *)nv[i])->getLuong() > temp1)
                temp1 = ((ltv *)nv[i])->getLuong();
            temp = i;
        }
        else
        {
            if (((kcv *)nv[i])->getLuong() > temp1)
                temp1 = ((kcv *)nv[i])->getLuong();
            temp = i;
        }
    }
    if (a[temp] == 1)
    {
        ((ltv *)nv[temp])->xuat();
    }
    else
    {
        ((kcv *)nv[temp])->xuat();
    }
}
void ds::nvLuongMin()
{
    int temp = 0, temp1 = 0;
    if (a[0] == 1)
    {
        temp1 = ((ltv *)nv[0])->getLuong();
    }
    else
    {
        temp1 = ((kcv *)nv[0])->getLuong();
    }
    cout << "Nhan vien co luong thap nhat la: " << '\n';
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 1)
        {
            if (((ltv *)nv[i])->getLuong() < temp1)
                temp1 = ((ltv *)nv[i])->getLuong();
            temp = i;
        }
        else
        {
            if (((kcv *)nv[i])->getLuong() < temp1)
                temp1 = ((kcv *)nv[i])->getLuong();
            temp = i;
        }
    }
    if (a[temp] == 1)
    {
        ((ltv *)nv[temp])->xuat();
    }
    else
    {
        ((kcv *)nv[temp])->xuat();
    }
}
void ds::ltvLuongMax()
{
    int temp = 0, temp1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
            continue;
        if (((ltv *)nv[i])->getLuong() > temp)
        {
            temp = ((ltv *)nv[i])->getLuong();
            temp1 = i;
        }
    }
    cout << "Lap trinh vien co luong cao nhat: " << '\n';
    ((ltv *)nv[temp1])->xuat();
}
void ds::kcvLuongMax()
{
    int temp = 0, temp1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            continue;
        if (((ltv *)nv[i])->getLuong() > temp)
        {
            temp = ((ltv *)nv[i])->getLuong();
            temp1 = i;
        }
    }
    cout << "Kiem chung vien co luong cao nhat: " << '\n';
    ((ltv *)nv[temp1])->xuat();
}