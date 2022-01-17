#include <iostream>
int main()
{
    float c, f, celcius, fahrenheit;
    std::cout << "enter celcius";
    std::cin >> celcius;
    f = (celcius * 9 / 5) + 32;
    std::cout << "your f" << f << std::endl;
    std::cout << "enter fahrenheit";
    std::cin >> fahrenheit;
    c = (fahrenheit - 32) * 5 / 9;
    std::cout << "your f" << c << std::endl;
}
/*
enter celcius100
your f212
enter fahrenheit212
your f100
*/