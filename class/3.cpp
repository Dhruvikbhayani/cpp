#include <iostream>
using namespace std;
class test
{
    int x, y, z;

public:
    void inserdata()
    {
        cout << "\n x:";
        cin >> x;
        cout << "\n y:";
        cin >> y;
        cout << "\n z:";
        cin >> z;
    }
    int printdata()
    {
        cout << "\n x:" << x;
        cout << "\n y:" << y;
        cout << "\n z:" << z;
    }
    int sum()
    {
        cout << "\nx+y+z :" << x + y + z;
    }
    int multi()
    {
        cout << "\n x*y*z :" << x * y * z;
    }
};
int main()
{
    test t2;
    t2.inserdata();
    t2.printdata();
    t2.sum();
    t2.multi();
}