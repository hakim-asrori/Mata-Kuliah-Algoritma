#include <iostream>
#include <stdio.h>

using namespace std;

/* Judul Praktikum 121 : Mengetahui alamat suatu variable */

int main()
{
	int bil;
	float pecahan;
	
	bil=100;
	pecahan=200.2;
	cout<<"Ini isi variabel : "<<endl;
	cout<<"Bil = "<<bil<<endl;
	cout<<"Pecahan = "<<pecahan<<endl;
	
	cout<<"Kalau ini alamat variabel :"<<endl;
	
	// Gunakan tanda & didepan variabe
	// Untuk mengetahui alamat variabel
	
	cout<<"Bil = "<<&bil<<endl;
	cout<<"Pecahan = "<<&pecahan<<endl;
}
