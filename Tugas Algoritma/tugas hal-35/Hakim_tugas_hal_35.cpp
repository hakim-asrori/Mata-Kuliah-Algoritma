#include "stdio.h"
#include <iostream>

using namespace std;

int main()
{
    int y = 33, x = 45;

    y = y && x;
    printf("%d\n", y);

    y = y & x;
    printf("%d\n", y);

    y = 33, x = 45;

    y = y & x;
    printf("%d\n", y);

    y = y && x;
    printf("%d\n", y);

    cin.get();
}