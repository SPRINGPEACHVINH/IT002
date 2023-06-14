#include "HonDon.cpp"
int main()
{
    int n;
    cout << "Nhap so the gioi: ";
    cin >> n;
    vector<World> worlds(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin cua gioi dien: ";
        worlds[i].nhap();
    }
    for (int i = 0; i < n; i++)
    {
        worlds[i].xuat();
    }
    // vector<World> thuonggioi;
    // vector<World> hagioi;
    // for (int i = 0; i < n; i++)
    // {
    //     if (worlds[i].phanloai())
    //     {
    //         thuonggioi.push_back(worlds[i]);
    //     }
    //     else
    //     {
    //         hagioi.push_back(worlds[i]);
    //     }
    // }
    // int countthuong = thuonggioi.size();
    // int countha = hagioi.size();

    // int temp = thuonggioi[0].tiemluc();
    // World tempthuong = thuonggioi[0];
    // for (int i = 1; i < countthuong; i++)
    // {
    //     if (temp < thuonggioi[i].tiemluc())
    //     {
    //         temp = thuonggioi[i].tiemluc();
    //         tempthuong = thuonggioi[i];
    //     }
    // }
    // cout << "Thuong gioi co tiem luc cao nhat: ";
    // tempthuong.xuat();

    // int temp2 = hagioi[0].tiemluc();
    // World tempHa = hagioi[0];
    // for (int i = 1; i < countha; i++)
    // {
    //     if (temp2 < hagioi[i].tiemluc())
    //     {
    //         temp2 = hagioi[i].tiemluc();
    //         tempHa = hagioi[i];
    //     }
    // }
    // cout << "Ha gioi co tiem luc cao nhat: ";
    // tempHa.xuat();
}
