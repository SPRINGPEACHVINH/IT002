#include "dagiac.cpp"
int main() {
    DaGiac d;
    d.nhap();
    d.xuat();
    d.draw();
    int dx, dy;
    cout<<"Nhap toa do muon tinh tien: ";
    cin>>dx>>dy;
	d.TinhTien(dx,dy);
	double goc;
	cout<<"Nhap goc muon xoay (theo do): ";
	cin>>goc;
	d.xoay(goc);
    double k,h;
    cout<<"Nhap he so phong to: ";
    cin>>k;
    d.ZoomIn(k);
    cout<<"Nhap he so thu nho: ";
    cin>>h;
    d.ZoomOut(h);
}