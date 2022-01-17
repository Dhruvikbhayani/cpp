//call by refernce
#include <iostream>
using namespace std;
int &returnvalue(int &x)
{
    cout << "x=" << x << "the address of x is" << &x; //&x = address of a
    return x;
}
int main()
{
    int a = 20;
    int &b = returnvalue(a);
    cout << "\na=" << a << "the address of a is" << &a;
    cout << "\nb=" << b << "the address of b is" << &b; //&b = address of x;
    return 0;
}
/*
x=20the address of x is0x61ff08
a=20the address of a is0x61ff08
b=20the address of b is0x61ff08
*/