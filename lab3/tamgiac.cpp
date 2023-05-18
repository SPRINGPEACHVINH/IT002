#include "point.cpp"
using namespace std;
class TamGiac
{
private:
	Point a, b, c;

public:
	TamGiac(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int x3 = 0, int y3 = 0) : a(x1, y1), b(x2, y2), c(x3, y3)
	{
	}
	void nhap()
	{
		cout << "Nhap diem thu nhat: ";
		a.nhap();
		cout << '\n';
		cout << "Nhap diem thu hai: ";
		b.nhap();
		cout << '\n';
		cout << "Nhap diem thu ba: ";
		c.nhap();
		cout << '\n';
	}
	void xuat()
	{
		cout << "Tam giac co ba dinh: ";
		a.xuat();
		cout << ",";
		b.xuat();
		cout << ",";
		c.xuat();
		cout << '\n';
	}
	void draw()
	{
		line(a.getX(), a.getY(), b.getX(), b.getY());
		line(a.getX(), a.getY(), c.getX(), c.getY());
		line(b.getX(), b.getY(), c.getX(), c.getY());
	}
	void TinhTien(int dx, int dy)
	{
		a.TinhTien(dx, dy);
		b.TinhTien(dx, dy);
		c.TinhTien(dx, dy);
		draw();
	}
	void xoay(double A)
	{
		A=(A*M_PI)/180.0;
		a.setX(a.getX() * cos(A) + a.getY() * sin(A));
		a.setY(a.getX() * sin(A) + a.getY() * cos(A));
		b.setX(b.getX() * cos(A) + b.getY() * sin(A));
		b.setY(b.getX() * sin(A) + b.getY() * cos(A));
		c.setX(c.getX() * cos(A) + c.getY() * sin(A));
		c.setY(c.getX() * sin(A) + c.getY() * cos(A));
		draw();
	}
	void ZoomIn(double k)
	{
		Point G((a.getX() + b.getX() + c.getX()) / 3, (a.getY() + b.getY() + c.getY()) / 3);
		a.setX(G.getX() + (a.getX() - G.getX()) * k);
		a.setY(G.getY() + (a.getY() - G.getY()) * k);
		b.setX(G.getX() + (b.getX() - G.getX()) * k);
		b.setY(G.getY() + (b.getY() - G.getY()) * k);
		c.setX(G.getX() + (c.getX() - G.getX()) * k);
		c.setY(G.getY() + (c.getY() - G.getY()) * k);
		draw();
	}
	void ZoomOut(double k) {
		k=1/k;
		ZoomIn(k);
		draw();
	}
};
