#include <iostream>

using namespace std;

int Fibonnaci (int f)
{
    if ((f==1)||(f==0))
    {
        return f;
    }
    else
    {
        return Fibonnaci(f-1)+Fibonnaci(f-2);
    }
    
}

int main()
{
    int f;
    int i = 1 ;
    cout << "Angka fibonnaci : " ;
    cin >> f; 

    cout << "\nHasil fibonannci : ";
    while (i < f)
    {
        cout << " " << Fibonnaci(i);
        i++;
    }
    
    return 0;

}