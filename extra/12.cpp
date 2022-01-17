//friend funcation
#include <iostream>
using namespace std;
class Distance
{
public:
    int feet, inch, length;

    Distance(int f = 0, int i = 0, int l = 0)
    {
        this->feet = f;
        this->inch = i;
        this->length = l;
    }
    friend Distance operator+(Distance &d1, Distance &d2)
    {
        Distance d;
        d.feet = d1.feet + d2.feet;
        d.inch = d1.inch + d2.inch;
        d.length = d1.length + d2.length;
        return d;
    }
};
int main()
{
    Distance d1(8, 9, 4);
    Distance d2(10, 2, 56);
    Distance d3 = d1 + d2;
    cout << "\ntotal feet inches :" << d3.feet << "\t" << d3.inch << "\t" << d3.length;
}

/*
total feet inches :18   11      60
*/