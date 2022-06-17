#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
	for (int n = 10; n > 0; n--)
	{
		cout << n << ", ";
	}

	cout << "FIRE!";

	getch();

	return 0;
}