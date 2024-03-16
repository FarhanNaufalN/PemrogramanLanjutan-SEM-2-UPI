#include <iostream>
using namespace std;
int pArray01();
int main(){
    int value [5] = {2,5,7,9,1};

    int x;
    pArray01();
    return 0;
}

int pArray01(int a[5]){
    int b[5];

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i] + 1;
        cout << "nilai" << i + 1 << ":" << b[i] << endl;
    }
    
        return 0;
}