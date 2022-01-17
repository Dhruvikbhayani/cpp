#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'I' || a == 'i' || a == 'O' || a == 'o' || a == 'U' || a == 'u')
    {
        cout << "this in vowel";
    }
    else
    {
        cout << "this is consonants";
    }
}