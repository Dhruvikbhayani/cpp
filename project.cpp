#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class bank
{
public:
    int c;
    char name[20];
    float bal;
    void get();
    void put();
};
class p : public bank
{

public:
    void deposit();
    void withdraw();
    void Show();
};

void bank::get()
{

    cout << "enter your name";
    cin >> name;
    cout << "enter your current balance ";
    cin >> c;
}
void bank::put()
{
    cout << "your name " << name;
    cout << "your cuurent balance " << c;
}
void p::deposit()s
{

    int despositbalance;
    cout << " enter  deposit amount";
    cin >> despositbalance;
    bal = c + despositbalance;
}
void p ::withdraw()
{
    int withdraw;
    cout << "enter your withdraw";
    cin >> withdraw;
    if (withdraw > bal)
    {
        cout << "'sorry";
    }
    else
    {

        cout << "your balace is " << c - withdraw;
    }
}
void p::Show()
{
    cout << "your despoit amount" << bal;
    cout << "you with withdraw amout<,";
}

int main()
{
    p c;
    c.get();
    c.deposit();
    c.withdraw();
}
