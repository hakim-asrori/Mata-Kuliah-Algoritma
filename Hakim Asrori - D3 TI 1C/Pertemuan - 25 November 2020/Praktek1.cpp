#include <iostream>
#include <stdio.h>
#include <math.h>

/*
	Judul praktikum 111 : Menghitung Y = cos x + 20x
	
	Hakim Asrori
*/

using namespace std;

double cosx(double x, double y);

main()
{
	double xm, ym;
	cout<<"Masukan X = ";
	cin>>xm;
	
	cout<<"Y = "<<cosx(xm, ym)<<endl;
}

double cosx(double x, double y)
{
	y = cos(x) + (20 * x);
	return (x,y);
}
