#include <iostream>
using namespace std;

int fungsiganjilgenap(long long int array[]);

int main()
{
    long long int array[] = {3, 11, 23, 553, 48837, 443368, 2002998, 2993889487};
    fungsiganjilgenap(array);

    return 0;
}

int fungsiganjilgenap(long long int array[8])
{
    for (int l = 0; l < 8 ; l++)
    {
        if (array[l]%2==0)
        {
            cout << array[l] << " = Genap" << endl;
        } else
        {
            cout << array[l] << " = Ganjil" << endl;
        }
    }
    return array[8];
}