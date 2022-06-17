#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main()
{
	int i, j, kolom, baris, matrik[10][10];
	
	cout<<"Masukan jumlah Baris : ";
	cin>>baris;
	
	cout<<"Masukan jumlah Kolom : ";
	cin>>kolom;
	
	cout<<endl;
	
	if(baris != kolom)
	{
		cout<<"Ini bukan matriks dengan ordo yang sama"<<endl;
	} else {
		for(i=0;i<baris;i++)
		{
			for(j=0;j<kolom;j++)
			{
				cout<<"Baris Ke ["<<i<<"] Kolom Ke ["<<j<<"] = ";
				cin>>matrik[i][j];		
			}
			cout<<endl;
		}
		
		system("cls");
		cout<<"Hasil Matriks :"<<endl;
		cout<<endl;
		for(i=0; i<baris; i++)
		{
			for(j=0; j<kolom; j++)
			{
				cout<<matrik[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	
	
}
