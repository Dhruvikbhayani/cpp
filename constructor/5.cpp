#include <iostream>
using namespace std;
class xyz
{
    int l, b;

public:
    xyz()
    {
        cin >> l;
        cin >> b;
        cout << "answer =" << l * b / 2;
    }
    ~xyz()
    {
    }
};
int main()
{
    xyz x1;
}
/*
10
5
answer =25
*/