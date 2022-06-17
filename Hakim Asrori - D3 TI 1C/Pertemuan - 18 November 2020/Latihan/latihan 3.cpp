#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main()
{
	int i, j, kolom, baris, matrik1[10][10], matrik2[10][10], hasil[10][10];
	
	cout<<"Masukan jumlah Baris : ";
	cin>>baris;
	
	cout<<"Masukan jumlah Kolom : ";
	cin>>kolom;
	
	cout<<endl;
	
	if(baris != kolom)
	{
		cout<<"Ini bukan matriks dengan ordo yang sama"<<endl;
	} else {
		
		cout<<"Masukan jumlah matriks 1 : "<<endl;
		for(i=0;i<baris;i++)
		{
			for(j=0;j<kolom;j++)
			{
				cout<<"Baris Ke ["<<i<<"] Kolom Ke ["<<j<<"] = ";
				cin>>matrik1[i][j];		
			}
			cout<<endl;
		}
		
		cout<<"Masukan jumlah matriks 2 : "<<endl;
		for(i=0;i<baris;i++)
		{
			for(j=0;j<kolom;j++)
			{
				cout<<"Baris Ke ["<<i<<"] Kolom Ke ["<<j<<"] = ";
				cin>>matrik2[i][j];		
			}
			cout<<endl;
		}
		
		system("cls");
		cout<<"Hasil Penjumlahan Matriks :"<<endl;
		cout<<endl;
		for(i=0; i<baris; i++)
		{
			for(j=0; j<kolom; j++)
			{
				hasil[i][j] = matrik1[i][j] + matrik2[i][j];
				cout << hasil[i][j] << " ";
			}
			cout<<endl;
		}
	}
	
	
	
}
