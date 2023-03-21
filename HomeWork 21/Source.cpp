#include <iostream>

int main()
{
    //Home work 21
    std::cout << "\n\n\t\tHome work 21\n\n";

    double X, Y;
    std::cout << "Enter number X -> ";
    std::cin >> X;
    std::cout << std::endl;
    std::cout << "Enter number Y -> ";
    std::cin >> Y;
    std::cout << std::endl;
    double* px = &X;
    double* py = &Y;
    std::cout << "Average arefmitic value is " << (*px + *py) / 2.0 << std::endl;

    return 0;
}