#include <iostream>
#include <array>
using namespace std;
// Farhan Naufal Nurdiansyah 2102555


void PerkalianMatrix(int Matrix1[2][2], int Matrix2 [2][2], int Matrix3[2][2]);

int main()
{
    int Matrix1[2][2] = {{2,4},{6,8}}, Matrix2[2][2] = {{3,5},{7,9}}, Matrix3[2][2];
    int i,j,k;
    PerkalianMatrix(Matrix1,Matrix2,Matrix3);
    return 0;
}

void PerkalianMatrix(int Matrix1[2][2], int Matrix2 [2][2], int Matrix3[2][2])
{
    cout << " MATRIX 1 " << endl;
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << Matrix1[i][j] << " ";
        }
        cout << endl;
    }
    
        cout << endl;

        cout << " MATRIX 2 " << endl;
        cout << endl;
        
   for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
          
            cout << Matrix2[i][j] << " ";
        }
        cout << endl;
    }
        cout << endl;

    for ( int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
          Matrix3[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
            Matrix3 [i][j] += Matrix1[i][k] * Matrix2 [k][j];
            }
        
        }
    }
     
      cout << "Hasil Perkalian MATRIX " << endl;
      cout << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << Matrix3[i][j] << " ";
        }
        cout << endl;
    }
    
}