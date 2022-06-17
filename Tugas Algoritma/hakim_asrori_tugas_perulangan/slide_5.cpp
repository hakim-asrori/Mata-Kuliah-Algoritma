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
	int b,a,e;
	char u[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout<<"Masukan Angka : ";
	cin>>b;
	for(a = b-1; a>=0; a--){
		cout<<u[a]<<" ";
	}
	getch();
	return 0;
}