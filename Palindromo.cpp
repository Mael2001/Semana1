#include <iostream>
using namespace std;
int main()
{
    cout << "Palabra" << endl;
    string arr = "alejandro";
    bool Pal = true;
    int ini = 0;
    for (int i = arr.length() - 1; i >= 0; i--)
    {
        arr[i] == arr[ini] ? Pal = true : Pal = false;
        ini++;
    }
    cout << (Pal == true ? "Palindromo" : "No");
    return 0;
}