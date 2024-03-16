#include <iostream> 
using namespace std;

void trapesiumsikusiku(int a)
{
 int rp, pr, hasil;
 cout << "Masukan Nilai RP : "<< endl;
 cin >> rp;
 cout << "Masukan Nilai PR : "<< endl;
 cin >> pr;


 hasil = (rp+pr)*a/2;

 cout << "Hasil Perhitungan : " << hasil << endl;
}

int main ()
{
    int T = 5;
    cout <<" Tinggi Trapesium : " << T << endl;

    trapesiumsikusiku(T); 



}