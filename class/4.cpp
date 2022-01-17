#include <iostream>
using namespace std;
class abc
{
    int x, y;

public:
    void dj()
    {
        cout << "x :";
        cin >> x;
        cout << "y :";
        cin >> y;
    }
    int ak()
    {
        cout << "x*y/2 =" << x * y / 2;
    }
};
int main()
{
    abc sd;
    sd.dj();
    sd.ak();
}

/* x :40
y :30
x*y/2 =600
*/