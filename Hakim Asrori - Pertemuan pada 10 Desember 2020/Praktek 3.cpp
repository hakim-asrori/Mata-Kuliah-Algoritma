#include <iostream>
#include <stdio.h>

using namespace std;

/* Judul Praktikum 124 : Mendefinisakan dan Mengisi variable Pointer */

int main()
{
	int bil;
	int *pbil;
	
	bil=10;
	pbil=&bil;
	
	cout<<"Ini isi Var Bil = "<<bil<<endl;
	cout<<"Ini isi Var PBil yang berisi alamat var Bil = "<<pbil<<endl;
	cout<<"Ini isi nilai yang ditunjukan Var PBil = "<<*pbil<<endl;
}
