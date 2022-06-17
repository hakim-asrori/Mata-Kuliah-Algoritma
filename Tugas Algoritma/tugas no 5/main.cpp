//////////////////////////
//                      //
// Author Hakim Asrori  //
//                      //
//////////////////////////

#include <iostream>
#include <stdio.h>
#include <conio.h>

int main()
{
    float nilai;

    printf("////////////////////////// \n");
    printf("//                      // \n");
    printf("// Author Hakim Asrori  // \n");
    printf("//                      // \n");
    printf("////////////////////////// \n");

    printf("\n");

    printf("Masukan nilai : ");
    scanf("%f",&nilai);

    if (nilai > 80 && nilai <= 100)
        printf("A = Istimewa");
    else if (nilai > 70 && nilai <= 80)
        printf("AB = Sangat Bagus");
    else if (nilai > 65 && nilai <= 70)
        printf("B = Bagus");
    else if (nilai > 60 && nilai <= 65)
        printf("BC = Cukup");
    else if (nilai > 55 && nilai <= 60)
        printf("C = Kurang");
    else if (nilai > 40 && nilai <= 55)
        printf("D = Sangat Kurang");
    else if (nilai <= 41 && nilai > -1)
        printf("E = Buruk");
    else
        printf("Harap masukan nilai dengan benar");

    getch();
}
