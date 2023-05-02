#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist;

// allows you to rename a datatype
// it has since been replaced for using

// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{
    text_t firstName = "Jorge";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}