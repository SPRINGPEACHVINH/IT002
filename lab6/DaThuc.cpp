#include <iostream>
#include <vector>
using namespace std;
int power(int p, int q)
{
    int m = 1000000007;
    p %= m;
    q %= (m - 1);
    int kq = 1;
    if (q == 0)
        return 1;
    else
    {
        while (q > 0)
        {
            if (q % 2 > 0)
                kq = kq * p % m;
            p = p * p % m;
            q /= 2;
        }
        return kq;
    }
}
class DaThuc
{
private:
    vector<int> heso;

public:
    DaThuc()
    {
        heso.push_back(0);
    }
    DaThuc(int n)
    {
        for (int i = 0; i < n; i++)
        {
            heso.push_back(0);
        }
    }
    DaThuc(vector<int> heso)
    {
        this->heso = heso;
    }
    void xuat()
    {
    }
    int bac_cua_DaThuc()
    {
        return heso.size() - 1;
    }
    int he_so(int so_mu)
    {
        if (so_mu > bac_cua_DaThuc())
        {
            return 0;
        }
        else
        {
            return heso[so_mu];
        }
    }
    friend istream &operator>>(istream &is, DaThuc &d)
    {
        int n;
        cout << "Nhap bac cua da thuc: ";
        cin >> n;
        d.heso.clear();
        for (int i = 0; i <= n; i++)
        {
            int temp;
            cout << "Nhap he so cua x^" << i << ": ";
            cin >> temp;
            d.heso.push_back(temp);
        }
        return is;
    }

    friend ostream &operator<<(ostream &os, DaThuc &d)
    {
        for (int i = d.bac_cua_DaThuc(); i >= 0; i--)
        {
            if (d.he_so(i) != 0)
            {
                if (d.he_so(i) == 1)
                {
                    if (i == d.bac_cua_DaThuc())
                    {
                        os << "x^" << i;
                    }
                    else if (i == 1)
                    {
                        os << " + "
                           << "x";
                    }
                    else if (i == 0)
                    {
                        os << " + " << d.he_so(i);
                    }
                    else
                    {
                        os << " + "
                           << "x^" << i;
                    }
                }
                else
                {
                    if (i == d.bac_cua_DaThuc())
                    {
                        os << d.he_so(i) << "x^" << i;
                    }
                    else if (i == 1)
                    {
                        os << " + " << d.he_so(i) << "x";
                    }
                    else if (i == 0)
                    {
                        os << " + " << d.he_so(i);
                    }
                    else
                    {
                        os << " + " << d.he_so(i) << "x^" << i;
                    }
                }
            }
        }
        os << '\n';
        return os;
    }
    DaThuc operator+(DaThuc d)
    {
        vector<int> result;
        int m = max(bac_cua_DaThuc(), d.bac_cua_DaThuc());
        for (int i = 0; i <= m; i++)
        {
            int tong = he_so(i) + d.he_so(i);
            result.push_back(tong);
        }
        return DaThuc(result);
    }
    DaThuc operator-(DaThuc d)
    {
        vector<int> result;
        int m = max(bac_cua_DaThuc(), d.bac_cua_DaThuc());
        for (int i = 0; i <= m; i++)
        {
            int hieu = he_so(i) - d.he_so(i);
            result.push_back(hieu);
        }
        return DaThuc(result);
    }
    int tinh_gia_tri(int x)
    {
        int result = 0;
        for (int i = bac_cua_DaThuc(); i >= 0; i--)
        {
            result += power(x, i) * he_so(i);
        }
        return result;
    }
};
int main()
{
    DaThuc d1, d2, calculate;
    int x, result;
    cout << "Nhap da thuc thu nhat:" << '\n';
    cin >> d1;
    cout << "Nhap da thuc thu hai:" << '\n';
    cin >> d2;
    cout << "Da thuc thu nhat: ";
    cout << d1;
    cout << "Da thuc thu hai: ";
    cout << d2;
    cout << "Tong hai da thuc: ";
    calculate = d1 + d2;
    cout << calculate;
    cout << "Hieu hai da thuc: ";
    calculate = d1 - d2;
    cout << calculate;
    cout << "Nhap gia tri cua x:";
    cin >> x;
    cout << "Gia tri cua hai da thuc voi x = " << x << '\n';
    result = d1.tinh_gia_tri(x);
    cout << result << '\n';
    result = d2.tinh_gia_tri(x);
    cout << result << '\n';
}