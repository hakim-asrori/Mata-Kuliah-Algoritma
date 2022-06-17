////////////////////
// 				  //
//  Hakim Asrori  //
// 				  //
////////////////////

#include <iostream>

using namespace std;

int main() {
    int x,y;

    printf("//////////////////// \n");
    printf("//                // \n");
    printf("//  Hakim Asrori  // \n");
    printf("//                // \n");
    printf("//////////////////// \n");
    printf("\n");
    printf("\n");

    for (x=1;x<=6;x++) {
        for (y=x;y<=6;y++) {
            cout << "A";
        }
        cout << endl;
    }
    cin.get();
    return 0;
}
