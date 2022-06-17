#include <iostream>
#include <stdio.h>
#include <math.h>

/*
	Judul praktikum 114 : Contoh perhitungan
						  Y = sin x + x^2
						  
	Hakim Asrori
*/

using namespace std;

main()
{
	int x;
	float y;
	cout<<"Masukan Nilai X = ";
	cin>>x;
	
	y=sin(x)+(pow(x, 2));
	cout<<"Y = "<<y<<endl;
}
