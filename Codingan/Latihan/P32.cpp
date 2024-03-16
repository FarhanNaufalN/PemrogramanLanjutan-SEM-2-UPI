#include <iostream>
using namespace std;
void pArray03(int larik[3][2][4]);

// Fungsi Utama
int main(){
    int angka[3][2][4] = {
                            {{1,2,3,4},
                             {4,3,2,1}
                            },
                            {{5,6,7,8},
                             {8,7,6,5}
                            },
                            {{2,3,2,3},
                             {3,2,3,2}
                            }
                        };


    //pemanggil prosedur
    pArray03(angka);

    return 0;
}

// Prosedur
void pArray03(int n[3][2][4]){
    // display array elements
    for(int a=0; a<3; a++){
        cout << a << endl;
        for(int b=0; b<2; b++){
            for(int c=0; c<4; c++){
                cout << n[a][b][c] << " ";
            }
            cout << endl ;
        }
        cout << endl;
    }
}