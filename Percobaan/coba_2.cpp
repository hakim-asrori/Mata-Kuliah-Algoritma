#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

struct data {
	int nomor;
	char nama[20], alamat[30], pekerjaan[20], lm_sewa[5], harga[20];
	struct data *n;
}*f;

void initial() {
	f = NULL;
}

void add(int bil, char nama[20], char alamat[30], char pekerjaan[20], char lm_sewa[5], char harga[20]) {
	
	data *baru;
	
	baru = new data;
	baru->nomor = bil;
	
	strcpy(baru->nama, nama);
	strcpy(baru->alamat, alamat);
	strcpy(baru->pekerjaan, pekerjaan);
	strcpy(baru->lm_sewa, lm_sewa);
	strcpy(baru->harga, harga);
	
	if (f==NULL || f->nomor > bil) {
		baru->n = f;
		f = baru;
	} else {
		data *t1, *t2;
		t1 = f;
		
		while (t1 != NULL) {
			if (t1->nomor < bil) {
				t2 = t1;
				t1 = t1->n;
			} else {
				baru->n = t1;
				t2->n = baru;
			}
			cout<<"\t\t\t\t Data Telah diTambahkan";
		}
	}
}

data* cari(int bil) {
		data *t;
		t = f;
		while (t != NULL) {
			if (t->nomor == bil)
			break;
			else t = t->n;
		}
		return t;
	}

void hapus (data *t1) {
	if (t1 == f)
		f = f->n;
		else {
			data *t2;
			t2 = f;
			while (t2->n != t1) {
				t2 = t2->n;
			}
			t2->n = t1->n;
		}
		
		t1->n = NULL;
		delete t1;
		
		cout << "Data telah dihapus \n";
}

void cetak() {
	if (f == NULL) {
		cout<<"Data belum diinput"<<endl;
		return;
	}
	
	data *t;
	t = f;
	
	while (t != NULL) {
		cout<<"Nomor Kamar	: "<<t->nomor<<endl;
		cout<<"Nama			: "<<t->nama<<endl;
		cout<<"Alamat		: "<<t->alamat<<endl;
		cout<<"Pekerjaan	: "<<t->pekerjaan<<endl;
		cout<<"Lama Sewa	: "<<t->lm_sewa<<endl;
		cout<<"Harga		: "<<t->harga<<endl;
		printf("\n\n");
		t = t->n;
	}
}

int main() {
	initial();
	int nomor, pil;
	char nama[20], alamat[30], pekerjaan[20], lm_sewa[5], harga[20];
	data *pos;
	
	lbl:
		cout<<"\n\n";
		cout<<"\t\t TAS TAKE HOME ASD"<<endl;
		cout<<"\t\t PROGRAM DATABASE HOTEL"<<endl;
		cout<<"\t\t CREATE BY : 2003071 - HAKIM ASRORI"<<endl;
		
		do {
			printf("\t\t +++++++++++++++++++++++++++++++++++++++++");
			cout<<"\n\t\t : MENU\t\t\t\t\t:\n"
				<<"\n\t\t : 1. TAMBAH DATA.\t\t\t:"
				<<"\n\t\t : 2. UPDATE DATA.\t\t\t:"
				<<"\n\t\t : 3. HAPUS DATA.\t\t\t:"
				<<"\n\t\t : 4. LIHAT DATA.\t\t\t:"
				<<"\n\t\t : 5. EXIT.\t\t\t\t:"
				<<"\n\t\t :_______________________________________:";
			cout<<"\n\n\t\t Masukan pilihan : ";
			cin>>pil;
			cout<<"\t\t\:";
			switch(pil) {
				case 1:
					cout<<"\nINSERT DATA";
					cout<<"\n===========\n";
					cout<<"Nomor Kamar	: "; cin>>nomor;
					cout<<"Nama			: "; gets(nama);
					cout<<"Alamat		: "; gets(alamat);
					cout<<"Pekerjaan	: "; gets(pekerjaan);
					cout<<"Lama Sewa	: "; gets(lm_sewa);
					cout<<"Harga 		: Rp. "; gets(harga);
					
					add(nomor,nama,alamat,pekerjaan,lm_sewa,harga);
					getch();
					goto lbl;
					break;
					
				case 2:
					cout <<"\nUPDATE:\n";
					printf("===============\n\n");
					cout <<"Update Nomor Kamar: ";cin >> nomor;
					pos = cari(nomor);
					if (pos !=NULL) {
						printf("Data Lama yang akan diubah,\n");
						printf("===========================\n");
						cout<<"Nama			: "<<pos->nama<<endl;
						cout<<"Alamat		: "<<pos->alamat<<endl;
						cout<<"Pekerjaan	: "<<pos->pekerjaan<<endl;
						cout<<"Lama Sewa	: "<<pos->lm_sewa<<endl;
						cout<<"Harga		: Rp. "<<pos->harga<<endl;
						
						cout<<endl;
						
						cout<<"Input Data Baru"<<endl;
						printf("===========================\n");
						cout << "Alamat : "; gets(pos->alamat);
						cout << "Pekerjaan : "; gets(pos->pekerjaan);
						cout << "Lama Sewa : "; gets(pos->lm_sewa);
						cout << "Harga : Rp. "; gets(pos->harga);
						cout << "\nData telah berhasil diupdate."<<endl;
						cout << "\Pilih menu 4 unutk melihat data"<<endl;
					} else
					
					cout<<"Maaf data dengan nomor "<<nomor<<" tidak ada, coba lagi."<<endl;
					getch();
					goto lbl;
					break;
					
					case 3:
						cout << "\nDELETE DATA:\n";
						printf("===============\n\n");
						cout << "Hapus Nomor : "; cin >> nomor;
						pos = cari(nomor);
						if(pos != NULL)
							hapus(pos);
							else
							cout<<"Maaf data dengan nomor "<<nomor<<" tidak ada, coba lagi."<<endl;
						getch();
						goto lbl;
						break;
						
					case 4 :
						cout <<"\nLIHAT DATA : \n";
						printf("===============\n\n");
						cetak(); getch(); goto lbl;
			}
		}
		while (pil>0 && pil >5);
	}





