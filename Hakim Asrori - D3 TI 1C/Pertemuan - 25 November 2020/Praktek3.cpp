#include <iostream>
#include <stdio.h>
#include <math.h>

/*
	Judul praktikum 113 : Menghitung y : x^3 + x^2
	
	Hakim Asrori
*/

using namespace std;

main()
{
	double x, y;
	cout<<"Masukan X = ";
	cin>>x;
	
	y=(pow(x, 3) + (pow(x, 2)));
	cout<<"Y = "<<y<<endl;
}
