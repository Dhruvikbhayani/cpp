//
#include <iostream>
using namespace std;
class base
{
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;
    int getpvt()
    {
        return pvt;
    }
};
class publicderived : public base
{
public:
    int getprot()
    {
        return prot;
    }
    int getpublic()
    {
        return pub;
    }
};
int main()
{
    publicderived o1;
    cout << "private " << o1.getpvt() << endl;
    cout << "protected " << o1.getprot() << endl;
    cout << "public" << o1.getpublic() << endl;
    return 0;
}
/*
private 1
protected 1
public1
*/