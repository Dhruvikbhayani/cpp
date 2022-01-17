#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {

        cout << "base1";
    }
};
class derived : public base1
{
public:
    derived()
    {
        cout << "\n derived";
    }
};
int main()
{
    derived d;
}
/*
base1
 derived
 */