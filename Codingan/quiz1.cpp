#include <iostream>
using namespace std;

int persamaany();
int persamaanz();

int main(){
    
    int hasilx;
    hasilx = persamaany()*persamaanz();
    cout << "persamaan nilai Y (a-b) = " << persamaany() << endl;
    cout << "persamaan nilai Z (c-d) = " << persamaanz() << endl;
    cout << " X = Y x Z  = "<< hasilx;
    return 0;
}

int persamaany(){
    int a = 2, b = 3;
    return a+b;
}

int persamaanz(){
    int c = 5, d = 4;
    return c-d;
}