#include <iostream>
#include <iomanip>
using namespace std;

void pertukarangelas(string A, string B, string C);

int main()
{
    
    string A = "Biru", B = "Merah", C = "Tidak Ada warna";
    pertukarangelas(A,B,C);


}

void pertukarangelas(string A, string B, string C)
{
    cout << "Gelas A yang berwarna " << A << endl;
    cout << "Gelas B yang berwarna " << B << endl;
    cout << "Gelas C " << C << endl;
    cout << endl;
    cout << setw(40);
    cout << "Gelas B dipindahkan ke Gelas C menjadi" << endl;
    cout << endl;
    B.swap(C);
    cout << "Gelas A menjadi  " << A << endl;
    cout << "Gelas B menjadi  " << B << endl;
    cout << "Gelas C menjadi  " << C << endl;
    cout << endl;
    cout << setw(40);
    cout << "Gelas A dipindahkan ke Gelas B menjadi" << endl;
    cout << endl; 
    A.swap(B);
    cout << "Gelas A menjadi  " << A << endl;
    cout << "Gelas B menjadi  " << B << endl;
    cout << "Gelas C menjadi  " << C << endl;
    cout << endl;

    C.swap(A);
    cout << setw(40);
    cout << "Gelas C dipindahkan ke Gelas A menjadi" << endl;
    cout << endl;

    cout << "Gelas A menjadi  " << A << endl;
    cout << "Gelas B menjadi  " << B << endl;
    cout << "Gelas C menjadi  " << C << endl;
    
}