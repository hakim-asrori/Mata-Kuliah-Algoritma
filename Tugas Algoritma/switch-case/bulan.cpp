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
	cout<<"Masukan Nomor Bulan : "<<endl;
	cin>>bulan;

	switch(bulan){
		case 1:
		cout<<"Januari"<<endl;
		break;
		case 2:
		cout<<"Februari"<<endl;
		break;
		case 3:
		cout<<"Maret"<<endl;
		break;
		case 4:
		cout<<"April"<<endl;
		break;
		case 5:  
		cout<<"Mei"<<endl;
		break;
		case 6:
		cout<<"Juni"<<endl;
		break;
		case 7:
		cout<<"Juli"<<endl;
		break;
		case 8:
		cout<<"Agustus"<<endl;
		break;
		case 9:
		cout<<"September"<<endl;
		break;
		case 10:
		cout<<"Oktober"<<endl;
		break;
		case 11:
		cout<<"November"<<endl;
		break;
		case 12:
		cout<<"Desember"<<endl;
		break;
		default :
		cout<<"Salah Memasukan Nomor"<<endl;
	}

	getch();
}