#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int y = 10, x = 10;
    y += x = 20;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    cin.get();
}
