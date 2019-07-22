#include<iostream>
using namespace std;
long Decimal(unsigned long num);
int main()

{
    unsigned long num=1011;
    unsigned long decimal = 0;
    cout <<"Numero Binario:  "<<num;
    decimal=Decimal(num);
    cout <<"\n\nNumero Decimal:  "<< decimal << endl;
    return 0;

}

long Decimal(unsigned long bin_num)
{
    unsigned long decimal = 0;
    int remainder=0, base = 1;


    while (bin_num > 0)

    {
        remainder = bin_num % 10;
        decimal = decimal + remainder * base;
        bin_num = bin_num / 10;
        base = base * 2;
    }

return decimal;

}
