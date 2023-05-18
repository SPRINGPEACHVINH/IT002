#include <iostream>
#include <vector>
using namespace std;
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
    void nhap()
    {
        int n;
        cout << "Nhap bac cua da thuc: ";
        cin >> n;
        heso.clear();
        for (int i = 0; i <= n; i++)
        {
            int temp;
            cout << "Nhap he so cua x^" << i << ": ";
            cin >> temp;
            heso.push_back(temp);
        }
    }
    void xuat()
    {
        for (int i = bac_cua_DaThuc(); i >= 0; i--)
        {
            if (he_so(i) != 0)
            {
                if (i == bac_cua_DaThuc())
                {
                    cout << he_so(i) << "x^" << i;
                }
                else if (i == 1)
                {
                    cout << " + " << he_so(i) << "x";
                }
                else if (i == 0)
                {
                    cout << " + " << he_so(i);
                }
                else
                {
                    cout << " + " << he_so(i) << "x^" << i;
                }
            }
        }
        cout << '\n';
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
    DaThuc cong(DaThuc d1, DaThuc d2)
    {
        vector<int> result;
        int m = max(d1.bac_cua_DaThuc(), d2.bac_cua_DaThuc());
        for (int i = 0; i <= m; i++)
        {
            int tong = d1.he_so(i) + d2.he_so(i);
            result.push_back(tong);
        }
        return DaThuc(result);
    }
    DaThuc tru(DaThuc d1, DaThuc d2)
    {
        vector<int> result;
        int m = max(d1.bac_cua_DaThuc(), d2.bac_cua_DaThuc());
        for (int i = 0; i <= m; i++)
        {
            int hieu = d1.he_so(i) - d2.he_so(i);
            result.push_back(hieu);
        }
        return DaThuc(result);
    }
    DaThuc nhan(DaThuc d1, DaThuc d2)
    {
        vector<int> result(d1.bac_cua_DaThuc() + d2.bac_cua_DaThuc() + 1, 0);
        for (int i = 0; i <= d1.bac_cua_DaThuc(); i++)
        {
            for (int j = 0; j <= d2.bac_cua_DaThuc(); j++)
            {
                result[i + j] += d1.he_so(i) * d2.he_so(j);
            }
        }
        return DaThuc(result);
    }
};