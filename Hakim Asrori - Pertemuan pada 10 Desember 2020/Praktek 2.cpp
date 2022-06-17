#include <iostream>
#include <stdio.h>

using namespace std;

/* Judul Praktikum 122 : Mendefinisakan dan Mengisi variable Pointer */

int main()
{
	int bil;
	
	// Tanda * di depan nama variabel adalah
	// Untuk mendefinisikan sebuah variabel pointer
	
	int *pbil;
	bil = 100;
	pbil = &bil;
	
	cout<<"Ini alamat variabel Bil = "<<&bil<<endl;
	cout<<"Ini isi variabel Pbil yang diisi dengan alamat Bil = "<<pbil<<endl;
}
