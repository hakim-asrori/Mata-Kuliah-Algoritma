#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
	for (int a = 1; a <= 10; a+=2)
	{
		cout << a << ", ";
	}

	cout << "FIRE!";

	getch();

	return 0;
}