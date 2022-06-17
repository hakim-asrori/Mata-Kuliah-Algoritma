#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
	int bil = 1;

	do
	{
		cout << bil << endl;
		bil = bil + 2;
	} while (bil <= 10);
	getch();

	return 0;
}