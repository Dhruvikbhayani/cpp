#include <iostream>
int main()
{
    int d, r, doller, rupees;
    std::cout << "enter rupees :";
    std::cin >> r;
    doller = r / 70;
    std::cout << "doller :" << doller;

    std::cout << "enter doller:";
    std::cin >> d;
    rupees = d * 70;
    std::cout << "rupees :" << rupees;
}
/*
enter rupees :1
doller :0enter doller:1
rupees :70
*/