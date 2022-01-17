#include <iostream>
int main()
{
    int a, b, c, total, pr;
    std::cout << "a :";
    std::cin >> a;
    std::cout << "b :";
    std::cin >> b;
    std::cout << "c :";
    std::cin >> c;
    total = a + b + c;
    std::cout << "total=" << total << std::endl;
    pr = total / 3;
    std::cout << "pr=" << pr;
}
/*
a :20
b :50
c :90
total=160
pr=53
*/