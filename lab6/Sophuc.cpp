#include <iostream>
using namespace std;
class sophuc
{
private:
    double thuc, ao;

public:
    sophuc(double thuc = 0, double ao = 0)
    {
        this->thuc = thuc;
        this->ao = ao;
    }
    friend istream &operator>>(istream &is, sophuc sophuc)
    {
        cout << "Nhap phan thuc: ";
        is >> sophuc.thuc;
        cout << "Nhap phan ao: ";
        is >> sophuc.ao;
        return is;
    }
    friend ostream &operator<<(ostream &os, sophuc sophuc)
    {
        if (sophuc.ao < 0)
            os << sophuc.thuc << sophuc.ao << "i" << endl;
        else
            os << sophuc.thuc << "+" << sophuc.ao << "i" << endl;
    }
    sophuc &operator+(sophuc &s)
    {
        return sophuc(thuc + s.thuc, ao + s.ao);
    }
    sophuc &operator+(sophuc &s)
    {
        return sophuc(thuc - s.thuc, ao - s.ao);
    }
    sophuc &operator+(sophuc &s)
    {
        return sophuc(thuc * s.thuc - ao * s.ao, thuc * s.ao + ao * s.thuc);
    }
   sophuc &operator/(sophuc &s)
    {
        return sophuc ((thuc * s.thuc + ao * s.ao) / (s.thuc * s.thuc + s.ao * s.ao), (s.thuc * ao - thuc * s.ao) / (s.thuc * s.thuc + s.ao * s.ao));
    }
};