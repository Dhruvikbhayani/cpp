// object as argument & object as return
#include <iostream>
using namespace std;
class example
{
public:
    int a, b;
    example() {}
    example(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    example add(example e1, example e2)
    {
        example e;
        e.a = e1.a + e2.a;
        e.b = e1.b + e2.b;
        return e;
    }
};
int main()
{
    example e1(10, 20), e2(30, 40), e3;
    e3 = e3.add(e1, e2);
    cout << "\n e1 a" << e1.a << "\tb" << e1.b;
    cout << "\n e2 a" << e2.a << "\tb" << e2.b;
    cout << "\n e3.a" << e3.a << "\tb" << e3.b;
    return 0;
}
/*
e1 a10 b20
 e2 a30 b40
 e3.a40 b60
 */