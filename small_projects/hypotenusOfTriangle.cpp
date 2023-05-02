#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    c = pow(a, 2) + pow(b, 2);
    c = sqrt(c);

    std::cout << "Your hypotenuse is: " << c << std::endl;

    return 0;
}