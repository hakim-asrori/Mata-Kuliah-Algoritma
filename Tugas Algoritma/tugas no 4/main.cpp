//////////////////////////
//                      //
// Author Hakim Asrori  //
//                      //
//////////////////////////
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float bulan;
    
    printf("////////////////////////// \n");
    printf("//                      // \n");
    printf("// Author Hakim Asrori  // \n");
    printf("//                      // \n");
    printf("////////////////////////// \n");

    printf("\n");

    printf("Pilih bulan (1..12) : ");
    scanf("%f",&bulan);

    if (bulan == 1)
        printf("Bulan yang anda pilih yaitu bulan Januari");
    else if (bulan == 2)
        printf("Bulan yang anda pilih yaitu bulan Februari");
    else if (bulan == 3)
        printf("Bulan yang anda pilih yaitu bulan Maret");
    else if (bulan == 4)
        printf("Bulan yang anda pilih yaitu bulan April");
    else if (bulan == 5)
        printf("Bulan yang anda pilih yaitu bulan Mei");
    else if (bulan == 6)
        printf("Bulan yang anda pilih yaitu bulan Juni");
    else if (bulan == 7)
        printf("Bulan yang anda pilih yaitu bulan Juli");
    else if (bulan == 8)
        printf("Bulan yang anda pilih yaitu bulan Agustus");
    else if (bulan == 9)
        printf("Bulan yang anda pilih yaitu bulan September");
    else if (bulan == 10)
        printf("Bulan yang anda pilih yaitu bulan Oktober");
    else if (bulan == 11)
        printf("Bulan yang anda pilih yaitu bulan November");
    else if (bulan == 12)
        printf("Bulan yang anda pilih yaitu bulan Desember");
    else
        printf("Tidak ada bulan yang dimaksud");

    getch();
    return 0;
}
