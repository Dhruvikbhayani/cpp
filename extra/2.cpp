//implicipt conversion explicit
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    float y = 2.5;
    char ch = 'A';

    y = x + y;
    x = x + y;

    cout << "\n y :" << y;
    cout << "\n x :" << x;

    ch = x + ch;
    cout << "\n ch" << (int)ch;
    return 0;
}
/*
 y :12.5
 x :22
 ch87
 */