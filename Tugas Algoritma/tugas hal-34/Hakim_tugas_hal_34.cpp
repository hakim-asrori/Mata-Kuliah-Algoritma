#include "stdio.h"
#include <iostream>
using namespace std;

void main()
{
    float x;
    x = 7 / 2;
    printf("x=%f\n", x);
    x = 7.0 / 2;
    printf("x=%f\n", x);
    x = 7 / 2.0;
    printf("x=%f\n", x);
    x = 7.0 / 2.0;
    printf("x=%f\n", x);

    cin.get();
}
