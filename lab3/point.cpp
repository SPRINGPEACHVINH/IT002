#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
class Point
{
private:
   int x, y;

public:
   Point(int x = 0, int y = 0)
   {
      this->x = x;
      this->y = y;
   }
   void setX(int x)
   {
      this->x = x;
   }
   void setY(int y)
   {
      this->y = y;
   }
   int getX()
   {
      return x;
   }
   int getY()
   {
      return y;
   }
   void TinhTien(int dx, int dy)
   {
      x += dx;
      y += dy;
   }
   void nhap()
   {
      cout << "Nhap hoanh do: ";
      cin >> x;
      cout << "Nhap tung do: ";
      cin >> y;
   }
   void xuat()
   {
      cout << "(" << x << "," << y << ")"<<endl;
   }
   // void draw()
   // {
   //    putpixel(x, y, WHITE);
   // }
};
// int main()
// {
//    int gd = DETECT, gm;
//    initgraph(&gd, &gm, "");
//    Point p;
//    p.nhap();
//    p.draw();
//    int n, m;
//    cout << "Nhap toa do muon tinh tien: ";
//    cin >> n >> m;
//    p.TinhTien(n, m);
//    getch();
//    closegraph();
//    return 0;
// }