#include <iostream>
#include <array>
using namespace std;
// Farhan Naufal Nurdiansyah 2102555

int perkalian(int i,int B[3], int A);

int main()
{
    int A = 23;
    int B [3] = {4, 6, 8};
    for (int i = 0; i < 1; i++)
    {
        cout << perkalian(i,B,A) << " ";
    }
    
    
}

int perkalian(int i, int B[3], int A)
{
    for (int i = 0; i < 3; i++)
    {
        B[i] = B[i] * A;
        cout << "Nilai hasil = " << " " << i+1 <<" "<< "= " << B[i] << endl; 
    }
     return B[i];
}