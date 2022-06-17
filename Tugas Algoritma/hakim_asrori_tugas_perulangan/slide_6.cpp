//////////////////////
///				   ///
///	 Hakim Asrori  ///
///				   ///
//////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int a,b,e;
	char u[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout<<"Masukan Angka : ";
	cin>>e;
	for(b = 0; b< e; b++){
		for(a = 0; a<= b; a++){
			cout<<u[a]<<" ";
		}
		cout<<endl;
	}
	getch();
	return 0;
}
