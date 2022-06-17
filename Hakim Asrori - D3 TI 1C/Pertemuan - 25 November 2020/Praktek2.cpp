#include <iostream>
#include <stdio.h>
#include <math.h>

/*
	Judul praktikum 112 : Menghitung persamaan
						  Y = log x + x + 2z
						  
	Hakim Asrori
*/

using namespace std;

main()
{
	double x, y, z;
	cout<<"Masukan X = ";
	cin>>x;
	cout<<"Masukan Z = ";
	cin>>z;
	
	y=log10(x) + x + (2 * z);
	cout<<"Y = "<<y<<endl;
}
