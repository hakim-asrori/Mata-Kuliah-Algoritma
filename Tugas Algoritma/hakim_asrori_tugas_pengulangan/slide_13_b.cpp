#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
	for (int a = 10; a >= 1; --a)
	{
		cout << a << ", ";
	}

	cout << "FIRE!";

	getch();

	return 0;
}