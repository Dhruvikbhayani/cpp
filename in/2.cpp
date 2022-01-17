#include <iostream>
using namespace std;
class base1
{

public:
    base1()
    {
        cout << "\nthis base1";
    }
};
class base2
{

public:
    base2()
    {
        cout << "\nthis base2";
    }
};
class derived : public base1, public base2
{
public:
    derived()
    {
        cout << "\nderived";
    }
};
int main()
{
    derived d;
}
/*
this base1
this base2
derived
*/
