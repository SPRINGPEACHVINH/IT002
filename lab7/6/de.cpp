#include "de.h"
#include "time.h"

int de::get_soluong()
{
	return soluong;
}
int de::sinhcon()
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
int de::cho_sua()
{
	int luong_sua = 0;
	int n = get_soluong();
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		int a = rand() % 11;
		luong_sua += a;
	}
	return luong_sua;
}
