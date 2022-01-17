//static variable
#include <iostream>
using namespace std;
class box
{
public:
    static int objectcount; //variable
    box()
    {
        cout << "constructor callled" << endl;
    }
    static int getcount() //function
    {
        return objectcount++;
    }
};
int box::objectcount;
int main(void)
{
    cout << "Inital stage count :" << box::getcount() << endl;
    box box1;
    box box2;
    cout << "final stage count :" << box::getcount() << endl;
    return 0;
}
/*
Inital stage count :0
constructor callled
constructor callled
final stage count :1
*/