#include "giasuc.h"
#include "bo.h"
#include "de.h"
#include "cuu.h"
int main()
{
	int soluongBO, soluongDE, soluongCUU;
	cout << "nhap so luong bo: ";
	cin >> soluongBO;
	cout << "nhap so luong de: ";
	cin >> soluongDE;
	cout << "nhap so luong cuu: ";
	cin >> soluongCUU;
	bo boo(soluongBO);
	de dee(soluongDE);
	cuu cuuu(soluongCUU);
	boo.keu();
	dee.keu();
	cuuu.keu();
	int tongsoluongsua = dee.cho_sua() + boo.cho_sua() + cuuu.cho_sua();
	int tongso_con = dee.sinhcon() + boo.sinhcon() + cuuu.sinhcon();
	int tongso_giasuc = tongso_con + soluongBO + soluongCUU + soluongDE;

	cout << "tong luong sua: " << tongsoluongsua <<"L"<< endl;
	cout << "tong so con sau 1 dot sinh: " << tongso_con << endl;
	cout << "tong so gia suc trong nong trai: " << tongso_giasuc << endl;
	cout << "tong so bo sau 1 dot sinh: " << soluongBO + boo.sinhcon()<<endl;
	cout << "tong so cuu sau 1 dot sinh: " << soluongCUU + cuuu.sinhcon()<<endl;
	cout << "tong so de sau 1 dot sinh: " << soluongDE + dee.sinhcon()<<endl;
}