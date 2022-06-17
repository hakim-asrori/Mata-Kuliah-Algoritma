#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	string nip, nama;
	int jumlah_anak, golongan;
	int gaji_pokok, tunjangan;
	
	cout << "----------------------" << endl;
	cout << "# MENAMPILKAN GAJI #" << endl;
	cout << "----------------------" << endl;
	
	cout << "NIP : ";
	cin >> nip;
	
	cout << "Nama : ";
	cin >> nama;
	
	cout << "Jumlah Anak : ";
	cin >> jumlah_anak;
	
	cout << "Golongan : ";
	cin >> golongan;
	
	if (golongan == 1) { gaji_pokok = 1200000; }
	else if(golongan == 2) { gaji_pokok = 2500000; }
	else if(golongan == 3) { gaji_pokok = 3600000; }
	else if(golongan == 4) { gaji_pokok = 4800000; }
	else { gaji_pokok = 0; }
	
	if (jumlah_anak >= 2) {
		
		tunjangan = 0.10 * gaji_pokok;
		
	} else {
		
		tunjangan = 0;
		
	}
	
	cout << "---------------------" << endl;
	
	cout << "NIP : " << nip << endl;
	cout << "Nama : " << nama << endl;
	cout << "Golongan : " << golongan << endl;
	cout << "Gaji Pokok : " << gaji_pokok << endl;
	cout << "Tunjangan : " << tunjangan << endl;
}
