#include <iostream>

#include <stdio.h>

using namespace std;

/* 
Judul Praktek : Menampilkan Data array 2 dimensi 
				   ke dalam bentuk matriks 
*/

int main()
{
	int i, j, matrik[3][3];
	
	matrik[0][0] =10;
	matrik[0][1] =11;
	matrik[0][2] =12;
	matrik[1][0] =20;
	matrik[1][1] =21;
	matrik[1][2] =22;
	matrik[2][0] =30;
	matrik[2][1] =31;
	matrik[2][2] =32;
	
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{
			cout<<matrik[i][j]<<" ";
		}
		cout<<endl;
	}
}
