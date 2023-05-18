#include <iostream>
using namespace std;
class student
{
public:
    string name;
    double toan, van;
    student()
    {
    }
    student(string name, double toan, double van)
    {
        this->name = name;
        this->toan = toan;
        this->van = van;
    }
    void nhap(student &s)
    {
        cout << "Nhap ho ten: ";
        getline(cin, name);
        cout << "Nhap diem toan: ";
        cin >> toan;
        cout << "Nhap diem van: ";
        cin >> van;
    }
    void tinhtrungbinh()
    {
        double t = (toan + van) / 2;
        cout << "Hoc sinh: " << name << endl;
        cout << "Diem trung binh: " << t;
    }
};
int main()
{
    student s;
    s.nhap(s);
    s.tinhtrungbinh();
}