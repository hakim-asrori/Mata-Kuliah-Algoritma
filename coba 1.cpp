#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void luas_lingkaran(int *panjang)
{
	int jari;
	cout << "----------------------------------------" << endl;
	cout << " # PROGRAM MENGHITUNG LUAS LINGKARAN- # " << endl;
	cout << "----------------------------------------" << endl;
	cout << " Masukan panjang jari-jari : ";
	cin >> jari;
	cout << "--------------------------------------" << endl;
	*panjang = jari;
}

int main()
{
	int a, sisa;
	float hasil;
	luas_lingkaran(&a);
	
	sisa = a % 7;
	
	if (sisa == 0)
	{
		hasil = 22 * (a * a) / 7;
		
	} else {
		
		hasil = 3.14 * a * a;	
		
	}
	
	cout << " Hasilnya : " << hasil << endl;
	cout << "--------------------------------------" << endl;
	
	getch();
}
