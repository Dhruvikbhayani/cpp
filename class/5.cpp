#include <iostream>
using namespace std;
class ab
{
    int r, i, y;

public:
    void bz()
    {
        cout << "r :";
        cin >> r;
        cout << "inters :";
        cin >> i;
        cout << " y :";
        cin >> y;
    }
    int si()
    {
        cout << "simple interst :" << r * i * y / 1200;
    }
};
int main()
{
    ab s;
    s.bz();
    s.si();
}