#include <iostream>
using namespace std;
void pArray02(int larik[3][2]);

// Fungsi Utama
int main(){
    int num[3][2] = {
                        {3, 4},
                        {9, 5},
                        {7, 1}
                    };

    //pemanggil prosedur
    pArray02(num);

    return 0;
}

// Prosedur
void pArray02(int n[3][2]){
    // display array elements
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
        }
    }
}
