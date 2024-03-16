#include<iostream>
using namespace std;

struct Buah
{
    string Nama;
    string Warna;
    float Berat;
    int Harga;
};

struct Toko
{
    string Pemilik_Toko;
    string Alamat;
};



int main()
{

Buah Duren;
Buah Rambutan;
Toko Farhan;

Farhan.Pemilik_Toko = "Toko Miracle ID";
Farhan.Alamat = "Jln. Farhan ganteng, RT 05, RW 01, Desa Sayang, Jatinangor, Sumedang";

Duren.Nama = "Duren";
Duren.Warna = "Kuning";
Duren.Berat = 15,5;
Duren.Harga = 55.000;

Rambutan.Nama = "Rambutan";
Rambutan.Warna = "Merah";
Rambutan.Berat = 1,5;
Rambutan.Harga = 15.000;

cout << endl;
cout << endl;
cout << Farhan.Pemilik_Toko << endl;
cout << Farhan.Alamat << endl;
cout << "============================" << endl;

cout << "Nama Buah  = " << Duren.Nama  << endl;
cout << "Warna Buah = " <<Duren.Warna << endl;
cout << "Berat Buah = " <<Duren.Berat << endl;
cout << "Harga Buah = " << Duren.Harga << endl;
cout << "============================" << endl;
cout << "Nama Buah  = "  <<Rambutan.Nama  << endl;
cout << "Warna Buah  = "  <<Rambutan.Warna << endl;
cout << "Berat Buah  = "  <<Rambutan.Berat << endl;
cout << "Harga Buah  = "  <<Rambutan.Harga << endl;
cout << "============================" << endl;

cin.get();
return 0;
}