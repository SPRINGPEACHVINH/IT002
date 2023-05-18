#include <bits/stdc++.h>
using namespace std;
class Candidate
{
public:
    string name;
    int mssv, day, month, year;
    double toan, van, anh;
    Candidate(string name, int mssv, int day, int month, int year, double toan, double van, double anh)
    {
        this->name = name;
        this->mssv = mssv;
        this->day = day; 
        this->month = month;
        this->year = year;
        this->toan = toan;
        this->van = van;
        this->anh = anh;
    }
    Candidate()
    {
    }
    void nhap()
    {
        cout << "Nhap msss: ";
        cin >> mssv;
        cout << "Ho ten: ";
        cin.ignore();
        getline(cin,name);
        cout << "Ngay sinh: ";
        cin >> day;
        cout << "Thang sinh: ";
        cin >> month;
        cout << "Nam sinh: ";
        cin >> year;
        cout << "Diem toan: ";
        cin >> toan;
        cout << "Diem van: ";
        cin >> van;
        cout << "Diem anh: ";
        cin >> anh;
    }
    void display()
    {
        cout << "Mssv: " << mssv << endl
             << "Ho ten: " << name << endl;
    }
};
class TestCandidate
{
public:
    int n;
    Candidate a[100];
    void nhap()
    {
        cout << "Nhap so thi sinh: ";
        cin >> n;
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Nhap thong tin thi sinh thu: " << i+1 << endl;
            a[i].nhap();
        }
    }
    double tongdiem(Candidate c)
    {
        int sum = c.toan + c.van + c.anh;
        return sum;
    }
    void display()
    {
        cout << "Cac thi sinh co tong diem tren 15: ";
        for (int i = 0; i < n; i++)
        {
            if (tongdiem(a[i]) > 15)
                a[i].display();
        }
    }
};
int main()
{
    Candidate c;
    TestCandidate a;
    a.nhap();
    a.display();
}