#include <iostream>
#include <stdio.h>

using namespace std;

/* Judul Praktikum 126 : Mengakses nilai yang  yang ditunjukan pointer melalui fungsi */
void nilai(int *bil);

int main()
{
	int angka;
	angka = 35;
	cout<<"Anga di main() = "<<angka<<endl;
	nilai(&angka);
	cout<<"Nilai di nilai() = "<<angka<<endl;
}

void nilai(int *bil)
{
	*bil = 100;
}
