
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
        cout << "\nderived1";
    }
};
class derived2
{
public:
    derived2()
    {
        cout << "\nderived2";
    }
};
class derived3
{
public:
    derived3()
    {
        cout << "\nderived1";
    }
};
int main()
{
    derived1 d1;
    derived2 d2;
    derived3 d3;
}
/*
base1
derived1
derived2
derived1
*/