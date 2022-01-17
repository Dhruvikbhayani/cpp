#include <iostream>
using namespace std;
class car
{
    // private // by default
public:
    string brand;
};
int main()
{
    car bmw;
    bmw.brand = "odd";
    cout << bmw.brand;
}

// output = odd