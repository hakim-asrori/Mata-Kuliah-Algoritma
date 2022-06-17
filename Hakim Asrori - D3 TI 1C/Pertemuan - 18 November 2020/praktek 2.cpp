#include <iostream>

#include <stdio.h>

using namespace std;

/* 
Judul Praktek : Operasi aritmatika pada array 3 dimensi
*/

int main()
{
	int i, j, k, nilai[2][2][2];
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			for(k=0; k<=1; k++)
			{
				cout<<"Masukan Nilai["<<i<<"]["<<j<<"]["<<k<<"] = ";
				cin>>nilai[i][j][k];
			}
		}
	}
	
	cout<<nilai[0][1][1]<<" + "<<nilai[0][1][0]<<" = "
		<<nilai[0][1][1]+nilai[0][1][0]<<endl;
	cout<<nilai[0][1][1]<<" - "<<nilai[0][1][0]<<" = "
		<<nilai[0][1][1]-nilai[0][1][0]<<endl;
	cout<<nilai[0][1][1]<<" * "<<nilai[0][1][0]<<" = "
		<<nilai[0][1][1]*nilai[0][1][0]<<endl;
}
