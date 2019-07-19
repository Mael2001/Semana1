#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Entero\tCuadrado\tCubo" << endl;
    for (int i = 0; i < 11; i++)
    {
        cout << i << "\t" << pow(i, 2) << "\t" << pow(i, 3) << endl;
    }
    return 0;
}