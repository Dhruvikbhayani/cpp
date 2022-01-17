#include <iostream>
using namespace std;
class test
{
public:
    test() //default constructor
    {
        cout << "constructor called...";
    }
};
int main()
{
    test t;
}
/*
constructor called...
*/