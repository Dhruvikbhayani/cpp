#include <iostream>
using namespace std;
class test
{
    int x;

public:
    void setdata(int a) //setter
    {
        x = a;
    }
    int getdata()
    {
        return x;
    }
};
int main()
{
    test t1;
    t1.setdata(10);
    cout << "x:" << t1.getdata();
}