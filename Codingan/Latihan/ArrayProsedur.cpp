#include <iostream>
using namespace std;


void menampilkanNilai (int listNumber[3][2][4])
{
    for(int i = 0;i <= 2;i++)
    {
        cout << "Layer ke -" << i << endl;
        for ( int j = 0; j <=1; j++){
            for ( int k = 0; k <=3; k++)
            {
                cout << listNumber[i][j][k] << " ";
            }
            cout << endl;
        }  
    } 
}


int main()
{
    int listNumber[3][2][4] = {{3,4,5,6}, {5,6,7,8}, {7,8,9,10}};
    menampilkanNilai(listNumber);
    return 0;
}