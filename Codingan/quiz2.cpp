#include <iostream>
using namespace std;

int LuasPP();
int LuasPersegi();
int LuasSegitiga();

int main ()
{
    int LuasTotal;
    LuasTotal = LuasPP() + LuasPersegi() + LuasSegitiga();
    cout << "Hasil dari Luas Persegi Panjang = " << LuasPP() << endl; 
    cout << "Hasil dari Luas Persegi  = " << LuasPersegi() << endl;   
    cout << "Hasil dari Segitiga = " << LuasSegitiga() << endl;  

     cout << "Hasil dari Luas Rumah  = " << LuasTotal << endl;  
}

int LuasPP() 
{
    int p=2;
    int l=3;
    return p*l;
}

int LuasPersegi()
{
    int s = 5;
    return s*s;
}

int LuasSegitiga()
{
    int a=4;
    int t=3;

    return a*t/2;
}