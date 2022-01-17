//memory management
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = NULL;
    p = new int;
    *p = a;
    cout << "\nvalue of p :" << *p;

    int n = 5;
    int *q = new int[n];
    //int *q = NULL;
    for (int i = 0; i < n; i++)
        q[i] = i + 1;

    delete p;
    delete[] q;

    cout << "\n value store in block of memory:";
    for (int i = 0; i < n; i++)
        cout << q[i] << "";
    return 0;
}
/*
value of p :10
 value store in block of memory:81556728132696345
 */