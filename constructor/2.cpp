#include <iostream>
using namespace std;
class test
{
public:
    test(int x) //parameterized constructor
    {
        cout << "\n constructor called " << x;
    }
};
int main()
{
    test t1(1), t2(2), t3(3);
}
/*
 constructor called 1
 constructor called 2
 constructor called 3
 */