#include <iostream>
#include <iomanip>
using namespace std;

void pertukarangelas();

int main()
{
    
    string A = "Biru", B = "Merah";
    pertukarangelas();


}

void pertukarangelas(string A, string B)
{
    cout << "Gelas A yang berwarna " << A << endl;
    cout << "Gelas B yang berwarna " << B << endl;
    cout << endl;
    cout << setw(35);
    cout << "Sesudah ditukar akan menjadi" << endl;
    cout << endl;
    
    A.swap(B);
    cout << "Gelas A yang berwarna " << A << endl;
    cout << "Gelas B yang berwarna " << B << endl;
    
}