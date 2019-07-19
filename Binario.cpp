#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string num = "1011";
    int nume = 0;
    int cont = 0;
    for (int i = num.length() - 1; i >= 0; i--)
    {
        if (num[i] == '1')
        {
            if (cont == 0)
            {
                nume += 1;
            }
            else
            {
                nume += pow(2, cont);
            }
        }
        cont++;
    }
    cout << num << endl;
    cout << nume << endl;
    return 0;
}