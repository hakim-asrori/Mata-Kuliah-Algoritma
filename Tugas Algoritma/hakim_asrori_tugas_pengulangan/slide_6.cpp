#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
	int digit = 1;
	int nomor, bil, jumlah;
	
	while (digit <= 10)
	{
		printf("%d\n", digit);
		++digit;
	}

	printf("Masukan Data: ");
	scanf("%d", nomor);

	while (nomor != 9999)
	{
		++bil;
		jumlah = jumlah + nomor;
		printf("Masukan Data: ");
		scanf("%d", nomor);
	}

	getch();

	return 0;
}