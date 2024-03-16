// Praktikum EL3111 Arsitektur Sistem Komputer
// Modul        : 1
// Percobaan    : NA
// Tanggal      : 12 April 2022
// Kelompok     : 8 
// Rombongan    : NA
// Nama (NIM) 1 : Farhan Naufal Nurdiansyah 2102555
// Nama (NIM) 1 : Farhan Naufal Nurdiansyah 2102555
// Nama File    : code.c
// Deskripsi    : Demonstrasi proses kompilasi C Menjumlahkan deret bilangan sebanyak N_LOOP

#define N_LOOP 500

int main(void)
{
    int indeks;
    int accumulator;
    indeks = 0;
    accumulator = 0;

    while (indeks < N_LOOP)
    {
        accumulator = accumulator + indeks;
        indeks = indeks + 1;
    }
    return accumulator;
    
}