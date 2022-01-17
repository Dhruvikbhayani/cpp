#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout << "\nbase1";
    }
};
class derived1 : public base1
{
public:
    derived1()
    {
        cout << "\nderived";
    }
};
class derived2 : public derived1
{
public:
    derived2()
    {
        cout << "\nderived2";
    }
};
int main()
{
    derived2 d;
}
/*
base1
derived
derived2
*/