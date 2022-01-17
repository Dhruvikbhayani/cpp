#include <iostream>
using namespace std;
class abc
{
    int r, i, m;

public:
    abc()
    {

        cin >> r;
        cin >> i;
        cin >> m;
        cout << "answer =" << r + i + m / 1200;
    }
};
int main()
{
    abc dd;
}
/*
5000
2
30
answer =250
*/