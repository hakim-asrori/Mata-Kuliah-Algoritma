
/*TUBES ALPROG
KELOMPOK 2
1. Andita Farah Salsabila
2. Desih Sapriah
3. Hakim Asrori
4. Nandag Eka Prasetya
*/
#include <conio.h>
#include <iostream>
#define CLRSCR system("clear");
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std;
int main ()
{
	char x,kode1,kode2,kdMasuk,nama[25],menu1[30],menu2[30],menu3[30],menu4[30],waktu[30];
	double u,hargaSatuan,hargaMenu1,hargaMenu2,hargaMenu3,hargaMenu4,hargaMenu5,jumlahMakanan,totalHarga,totalBayar,uangKembalian;
	awal:
	cout<<""<<endl<<endl;
	cout<<"============================================="<<endl;
	cout<<"\t WARUNG NGODING (ngopi dingin)"<<endl;
	cout<<"\t"<<endl;
	cout<<"============================================="<<endl<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"\t\tPILIHAN MENU"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"1. MAKANAN "<<endl;
	cout<<"2. MINUMAN "<<endl;
	cout<<"---------------------------------------------"<<endl; 
	cout<<"Pilih Menu [1-2] :";cin>>u;
	cout<<"---------------------------------------------"<<endl;
	cout<<""<<endl;
	
	
	if(u==1)
	{
	  	cout<<"===================================="<<endl;
		cout<<"\t\tMENU MAKANAN"<<endl;
		cout<<"===================================="<<endl;
		cout<<"1. MAKANAN PEMBUKA"<<endl;
		cout<<"2. MAKANAN UTAMA"<<endl;
		cout<<"3. MAKANAN PENUTUP"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Pilih Menu Makanan [1-3] :";cin>>kode1;
		cout<<"------------------------------------"<<endl;
		cout<<""<<endl;
	}
	else
	if (u==2)
	{
		cout<<"===================================="<<endl;
		cout<<"\t\tMENU MINUMAN"<<endl;
		cout<<"===================================="<<endl;
		cout<<"1. Menu JUS"<<endl;
		cout<<"2. Menu SODA"<<endl;
		cout<<"3. Menu KOPI"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<" Pilih Menu Minuman [1-3] :";cin>>kode2;
		cout<<"------------------------------------"<<endl;
		cout<<""<<endl;

	
	}
	else{
		cout<<"Kode salah"<<endl;
		getch();
	}
    
    switch(kode1) {
    	case '1' :
    	strcpy(menu1, "1. Kentang Goreng");
    	strcpy(menu2, "2. Sosis Bakar");
    	strcpy(menu3, "3. Nugget Goreng");
    	hargaMenu1=15000;
    	hargaMenu2=10000;
    	hargaMenu3=10000;
    break;
    	case '2' :
    	strcpy(menu1, "1. Nasi Bakar");
    	strcpy(menu2, "2. Nasi Timbal");
    	strcpy(menu3, "3. Nasi Goreng");
    	hargaMenu1=30000;
    	hargaMenu2=30000;
    	hargaMenu3=25000;
    break;
        case '3' :
		strcpy(menu1, "1. Pancake");
    	strcpy(menu2, "2. Puding");
    	strcpy(menu3, "3. Rujak");
    	hargaMenu1=15000;
    	hargaMenu2=15000;
    	hargaMenu3=15000;
    break; 
    default :
    strcpy(menu4, "KODE SALAH");
    break;
	}
	switch(kode2) {
	case '1' :
	strcpy(menu1, "1. Jus Mangga");
	strcpy(menu2, "2. Jus Sirsak");
	strcpy(menu3, "3. Jus Jeruk ");
	hargaMenu1=10000;
    hargaMenu2=10000;
    hargaMenu3=10000;
	break;
	case '2' :
	strcpy(menu1, "1. Fanta");
	strcpy(menu2, "2. Coca-Cola");
	strcpy(menu3, "3. Sprit");
	hargaMenu1=10000;
    hargaMenu2=10000;
    hargaMenu3=10000;
	break;
	case '3' :
	strcpy(menu1, "1. Hot Cappucino");
	strcpy(menu2, "2. Hot Vanila Latte");
	strcpy(menu3, "3. Hot Black Coffe");
	hargaMenu1=15000;
    hargaMenu2=15000;
    hargaMenu3=10000;
	break;
	default:
    strcpy(menu4, "KODE SALAH");
    break;
	}
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"\t\tSILAHKAN PILIH"<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<menu1<<"                   = Rp. "<<hargaMenu1<<endl;
	cout<<menu2<<"                   = Rp. "<<hargaMenu2<<endl;
	cout<<menu3<<"                   = Rp. "<<hargaMenu3<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"Masukan Kode Pilihan Anda [1-3] : ";cin>>kdMasuk;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<""<<endl;
	switch(kdMasuk){
	case '1' :
		hargaSatuan=hargaMenu1;
		strcpy(waktu, "5 Menit");
		break;
	case '2' :
		hargaSatuan=hargaMenu2;
		strcpy(waktu, "10 Menit");
		break;
	case '3' :
		hargaSatuan=hargaMenu3;
		strcpy(waktu, "15 Menit");
		break;
		default:
		strcpy(menu1, "KODE SALAH");
		break;
	}
	cout<<"========================================================"<<endl;
	cout<<"\t\tKASIR "<<endl;
	cout<<"\tSILAHKAN PESAN & BAYAR DISINI"<<endl;
	cout<<"========================================================"<<endl;
	cout<<"Nama Pemesan             =";cin>>nama;
	cout<<"Waktu Tunggu             ="<<waktu<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"Harga Satuan             = Rp. "<<hargaSatuan<<endl;
	cout<<"Jumlah Pesanan           =  ";cin>>jumlahMakanan;
	cout<<"--------------------------------------------------------"<<endl;
	totalHarga=jumlahMakanan*hargaSatuan;
	cout<<"Total Harga = Rp. "<<totalHarga<<endl;
	cout<<"Total Bayar = Rp. ";cin>>totalBayar;
	uangKembalian=totalBayar-totalHarga;
	cout<<"Kembalian   = Rp. "<<uangKembalian<<endl;
	cout<<"========================================================"<<endl;
	cout<<"\t\tTERIMA KASIH"<<endl;
	cout<<"\t\tSELAMAT DATANG KEMBALI"<<endl;
	cout<<"\t\tSELAMAT DATANG KEMBALI"<<endl;
	cout<<"========================================================"<<endl;

	getch();
	cout<<" "<<endl;
	cout<<"Ulangi Lagi (Y/T) :";
	cin>>x;
	if(x=='Y' || x=='y')
	goto awal;
	else
	cout<<" "<<endl;
	}
