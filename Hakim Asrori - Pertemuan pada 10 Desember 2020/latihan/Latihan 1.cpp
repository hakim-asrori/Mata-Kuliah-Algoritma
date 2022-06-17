#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int ain, abil[10], i;
	int *pbil;
	pbil = abil;
	
	cout<<"Masukan jumlah Array : ";
	cin>>ain;
	
	cout<<endl;

	for(i=0;i<ain;i++)
	{
		cout<<"Masukan Array Ke ["<<i<<"] = ";
		cin>>abil[i];		
	}
	
	cout<<endl;
	
	for(i=0; i<ain; i++)
	{
		cout << "Array ke " << i <<". Mempunyai Nilai " << abil[i];
		cout << ", Menempati Alamat Memori = ";
		cout << &pbil[i];
		cout << endl;
	}
	
}
