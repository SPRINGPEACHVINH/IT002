#include <iostream>
using namespace std;
class sophuc
{
public:
    double thuc, ao;
    sophuc() {}
    sophuc(double thuc, double ao)
    {
        this->thuc = thuc;
        this->ao = ao;
    }
    void nhap()
    {
        cout << "Nhap phan thuc: ";
        cin >> thuc;
        cout << "Nhap phan ao: ";
        cin >> ao;
    }
    void xuat()
    {
        if (ao < 0)
            cout << thuc << ao << "i" << endl;
        else
            cout << thuc << "+" << ao << "i" << endl;
    }
    void cong(sophuc a, sophuc b)
    {
        sophuc c(a.thuc + b.thuc, a.ao + b.ao);
        c.xuat();
    }
    void hieu(sophuc a, sophuc b)
    {
        sophuc c(a.thuc - b.thuc, a.ao - b.ao);
        c.xuat();
    }
    void tich(sophuc a, sophuc b)
    {
        sophuc c(a.thuc * b.thuc - a.ao * b.ao, a.thuc * b.ao + a.ao * b.thuc);
        c.xuat();
    }
    void thuong(sophuc a, sophuc b)
    {
        sophuc c((a.thuc * b.thuc + a.ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao), (b.thuc * a.ao - a.thuc * b.ao) / (b.thuc * b.thuc + b.ao * b.ao));
        c.xuat();
    }
};
int main()
{
    sophuc s1, s2, calculate;
    cout << "Nhap so phuc thu nhat: "<<endl;
    s1.nhap();
    cout << "Nhap so phuc thu hai: "<<endl;
    s2.nhap();
    cout << "Tong hai so: ";
    calculate.cong(s1, s2);
    cout << "Hieu hai so: ";
    calculate.hieu(s1, s2);
    cout << "Tich hai so: ";
    calculate.tich(s1, s2);
    cout << "Thuong hai so: ";
    calculate.thuong(s1, s2);
}