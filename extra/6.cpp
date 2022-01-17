// copy constructor
#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int x1, int y2)
    {
        x = x1;
        y = y2;
    }
    point(const point &p2)
    {
        x = p2.x;
        y = p2.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    point op1(53, 13);
    point op2 = op1;
    cout << "\nop1.x" << op1.getx() << "\top1.y" << op1.gety();
    cout << "\nop1.x" << op2.getx() << "\top1.y" << op2.gety();
}

/*
op1.x53 op1.y13
op1.x53 op1.y13
*/