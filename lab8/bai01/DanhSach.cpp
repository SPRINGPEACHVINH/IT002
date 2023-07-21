#include "DanhSach.h"
#include "CD.cpp"
#include "DH.cpp"
DS::DS()
{
    int n = 0;
    x = new hdt *[1000];
}

DS::~DS()
{
    delete[] x;
}

void DS::nhapDS()
{
    cout << "nhap so luong sinh vien: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        do
        {
            cout << "\nHe dao tao: \n1-He Cao Dang\n2-He Dai Hoc\n";
            cin >> k[i];
            if (k[i] != 1 && k[i] != 2)
                cout << "\nKhong hop le!\n";
        } while (k[i] != 1 && k[i] != 2);
        if (k[i] == 1)
        {
            x[i] = new CaoDang;
            ((CaoDang *)x[i])->nhap();
        }
        else
        {
            x[i] = new DaiHoc;
            ((DaiHoc *)x[i])->nhap();
        }
    }
}

void DS::xuatDS()
{
    cout << "\n-----Danh sach sinh vien-----\n";
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        if (k[i] == 1)
        {
            ((CaoDang *)x[i])->xuat();
        }
        else
        {
            ((DaiHoc *)x[i])->xuat();
        }
    }
}

void DS::TotNghiep()
{
    cout << "\n-----Danh sach sinh vien du dieu kien tot nghiep-----\n";
    for (int i = 0; i < n; i++)
    {
        if (k[i] == 1)
        {
            if (((CaoDang *)x[i])->XTN() == 1)
            {
                ((CaoDang *)x[i])->xuat();
            }
        }
        if (k[i] == 2)
        {
            if (((DaiHoc *)x[i])->XTN() == 1)
            {
                ((DaiHoc *)x[i])->xuat();
            }
        }
    }
}

void DS::KhongTotNghiep()
{
    cout << "\n-----Danh sach sinh vien khong du dieu kien tot nghiep-----\n";
    for (int i = 0; i < n; i++)
    {
        if (k[i] == 1)
        {
            if (((CaoDang *)x[i])->XTN() == 0)
            {
                ((CaoDang *)x[i])->xuat();
            }
        }
        if (k[i] == 2)
        {
            if (((DaiHoc *)x[i])->XTN() == 0)
            {
                ((DaiHoc *)x[i])->xuat();
            }
        }
    }
}

void DS::DH_DTBMax()
{
    double maxDTB = 0;
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (k[i] == 2)
        {
            if (((DaiHoc *)x[i])->getDtb() > maxDTB)
                maxDTB = ((DaiHoc *)x[i])->getDtb();
            max = i;
        }
    }
    cout << "\n-----Sinh vien dai hoc co diem trung binh cao nhat-----\n";
    ((DaiHoc *)x[max])->xuat();
}

void DS::CD_DTBMax()
{
    double mDTB = 0;
    int m = -1;
    for (int i = 0; i < n; i++)
    {
        if (k[i] == 1)
        {
            if (((CaoDang *)x[i])->getDtb() > mDTB)
                mDTB = ((CaoDang *)x[i])->getDtb();
            m = i;
        }
    }
    cout << "\n-----Sinh vien cao dang co diem trung binh cao nhat-----\n";
    ((CaoDang *)x[m])->xuat();
}

void DS::slsvKhongTotNghiep()
{
    int temp1, temp2;
    temp1 = 0;
    temp2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (k[i] == 1)
        {
            if (((CaoDang *)x[i])->XTN() == 0)
            {
                temp1++;
            }
        }
        if (k[i] == 2)
        {
            if (((DaiHoc *)x[i])->XTN() == 0)
            {
                temp2++;
            }
        }
    }
    cout << "\nSo luong sinh vien cao dang khong du dieu kien tot nghiep: " << temp1 << endl;
    cout << "\nSo luong sinh vien dai hoc khong du dieu kien tot nghiep: " << temp2 << endl;
}
