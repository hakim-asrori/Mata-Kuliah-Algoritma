#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void luas_lingkaran(int *panjang)
{
	int jari;
	cout << " Masukan panjang jari-jari : ";
	cin >> jari;
	*panjang = jari;
}

int main()
{
	int a, a_tujuh;
	float hasil;
	luas_lingkaran(&a);
	
	a_tujuh = a % 7;
	
	if (a_tujuh == 0)
	{
		hasil = 22 * (a * a) / 7;
		
	} else {
		
		hasil = 3.14 * a * a;	
		
	}
	
	cout << " Hasilnya : " << hasil << endl;
	
	getch();
}
