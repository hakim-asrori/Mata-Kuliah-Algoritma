//////////////////////
///				   ///
///	 Hakim Asrori  ///
///				   ///
//////////////////////

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int i,j,n;

	cout << "Masukkan nilai N: ";
	cin >> n;

	for (i=1;i<=n;i++) {
		for (j=1;j<=i;j++) {
			cout << "*";
		}
		cout << endl;
	}
	getch();
}