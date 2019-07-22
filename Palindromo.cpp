    #include <iostream>
    using namespace std;
    int main()
    {
         int n, num=11121, digit, rev = 0;
         n = num;
         do
         {
             digit = num % 10;
             rev = (rev * 10) + digit;
             num = num / 10;
         } while (num != 0);
         cout << rev << endl;
         if (n == rev)
             cout << " Numero Si Es Palindromo";
         else
             cout << " Numero No Es Palindromo";
        return 0;
    }