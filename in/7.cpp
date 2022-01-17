#include <iostream>
using namespace std;
class base
{

public:
    virtual void display()
    {
        cout << "base class is invoed" << endl;
    }
};
class dervied : public base
{
public:
    void display()
    {
        cout << "Derived class is invoked" << endl;
    }
};
int main()
{
    // base *p, b;
    // dervied d;
    // p = &b; //base
    // p->display();
    // p = &d; //derived
    // p->display();
    dervied d;
    d.display();
    base b;
    b.display();
}

/*
  1. base class is invoed
   Derived class is invoked

   2.Derived class is invoked
base class is invoed

*/