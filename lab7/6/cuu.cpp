#include "cuu.h"
#include "time.h"

int cuu::get_soluong()
{
	return soluong;
}
int cuu::sinhcon()
{
	int socon = 0;
	int n = get_soluong();
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		int a = rand() % 3;
		socon = socon + a;
		soluong = soluong + a;
	}
	return socon;
}
int cuu::cho_sua()
{
	int luong_sua = 0;
	int n = get_soluong();
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		int a = rand() % 6;
		luong_sua += a;
	}
	return luong_sua;
}
