#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x = 10, y = 6;
    x *= 5 + y;
    printf("%d\n", x);
    cin.get();
    return 0;
}