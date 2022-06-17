////////////////////
// 				  //
//  Hakim Asrori  //
// 				  //
////////////////////

#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int bulan;
	cout<<"Masukan Nomor Hari : "<<endl;
	cin>>bulan;

	switch(bulan){
		case 1:
		cout<<"Minggu"<<endl;
		break;
		case 2:
		cout<<"Senin"<<endl;
		break;
		case 3:
		cout<<"Selasa"<<endl;
		break;
		case 4:
		cout<<"Rabu"<<endl;
		break;
		case 5:  
		cout<<"Kamis"<<endl;
		break;
		case 6:
		cout<<"Jum'at"<<endl;
		break;
		case 7:
		cout<<"Sabtu"<<endl;
		break;
		default :
		cout<<"Salah Memasukan Nomor"<<endl;
	}

	getch();
}