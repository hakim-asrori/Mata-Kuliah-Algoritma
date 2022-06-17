//////////////////////
///				   ///
///	 Hakim Asrori  ///
///				   ///
//////////////////////

#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	int x,y;
	for (x=1; x<=10; x++)
	{
		for (y=1; y<=x; y++)
		{
			cout<<setw(4)<<x*y<<" ";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}