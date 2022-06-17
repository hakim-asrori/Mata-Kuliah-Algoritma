#include <iostream>

#include <stdio.h>

using namespace std;

int main()
{
	int nilai[2][3], i, j;
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<"Nilai ke ["<<i<<"]["<<j<<"] = ";
			cin>>nilai[i][j];
		}
	}

	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			cout<<"Nilai ke ["<<i<<"]["<<j<<"] = "<<nilai[i][j]<<endl;
			
		}
	}
}
