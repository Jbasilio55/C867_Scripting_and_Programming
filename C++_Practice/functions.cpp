#include <iostream>

using namespace std;

// declare a function
void test();

// pass in argument as parameters
void sayHi(string name, int age)
{
    cout << "Hello " << name << ", you are " << age << " years old" << endl;
}

int main()
{
    //script is run from top to bottom
    cout << "Top \n";
    sayHi("Sam", 29);
    cout << "Bottom \n";

    sayHi("Will", 30);
    sayHi("Sarah", 17);

    test();

    return 0;
}

void test()
{
    cout << "Testing functions \n";
}