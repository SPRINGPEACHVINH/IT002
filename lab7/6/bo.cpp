#include "bo.h"
#include "time.h"

int bo::get_soluong()
{
	return soluong;
}
int bo::sinhcon()
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
int bo::cho_sua()
{
	int luong_sua = 0;
	int n = get_soluong();
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		int a = rand() % 21;
		luong_sua += a;
	}
	return luong_sua;
}
