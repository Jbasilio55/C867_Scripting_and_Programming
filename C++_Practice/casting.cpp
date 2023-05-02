#include <iostream>

int main()
{
    // type conversion = conversion of a value of one data type to another
    //                    Implicit = automatic
    //                    Explicit = Precede value with new data type (int)

    int x = 3.14;

    //----- Implicit ------
    // 3.14, which is a double is change to int (.14) is truncated
    std::cout << x << std::endl;

    char y = 100;

    // c++ automatically changes 100 to letter d using ASCII code
    std::cout << y << '\n';

    // ------ Explicit ------
    // when you ask the program to change the value for you
    std::cout << (char) 100 << '\n';
    
    int correct = 8;
    int questions = 10;
    double score = correct/ (double) questions * 100;

    std::cout << score << "%";

    return 0;
}