////////////////////
// 				  //
//  Hakim Asrori  //
// 				  //
////////////////////
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

main()
{

	int a[5][5], s , n , h;

	  printf("//////////////////// \n");
    printf("//                // \n");
    printf("//  Hakim Asrori  // \n");
    printf("//                // \n");
    printf("//////////////////// \n");
    printf("\n");
    printf("\n");

	for (s = 0; s < 5; s++){

		for (n = 0; n < 5 ; n++){

			cout << " - Masukkan Baris " << (s + 1 ) << " , Kolom " << ( n + 1 ) << " = ";

			cin >> a[s][n];
		}

		cout << endl;

	}

	cout << endl;

	for (s = 0; s < 5 ; s++){

		for (n = 0; n < 5; n++){

			cout << setw(2) << a[s][n];
		}

		cout << endl << endl;

	}

	getch ();

}
