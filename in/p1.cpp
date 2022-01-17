#include <iostream>
#include <string.h>4
using namespace std;
class student
{
    int r1;
    char nm[20];

public:
    void read();
    void display();
};
class marks : public student
{
protected:
    int s1;
    int s2;
    int s3;

public:
    void getmarks();
    void putmarks();
};
class result : public marks
{
    int t;
    float p;
    char div[10];

public:
    void process();
    void printresult();
};
void student ::read()
{
    cout << "enter rollno:";
    cin >> r1;
    cout << "enter name : ";
    cin >> nm;
}
void student ::display()
{
    cout << "\n Roll no : " << r1 << endl;
    cout << "name : " << nm << endl;
    cout << "\n";
}
void marks ::getmarks()
{
    cout << "enter mark3 subject : " << endl;
    cin >> s1 >> s2 >> s3;
}
void marks ::putmarks()
{
    cout << "subject 1 :" << s1 << endl;
    cout << "subject 2 :" << s2 << endl;
    cout << "subject 3 :" << s2 << endl;
}
void result ::process()
{
    t = s1 + s2 + s3;
    p = t / 3.0;
    p >= 60 ? strcpy(div, "frist") : p >= 50 ? (div, "frist")
                                             : strcpy(div, "frist");
}
void result ::printresult()
{
    cout << "total " << t << endl
         << endl;
    cout << "percentage=" << p << endl;
    cout << "Divison= " << div << endl;
}
int main()
{
    result x;
    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();
    return 0;
}
/*
enter rollno:2
enter name : bhikho
enter mark3 subject :
50
99
90

 Roll no : 2
name : bhikho

subject 1 :50
subject 2 :99
subject 3 :99
total 239

percentage=79.6667
Divison= frist
*/