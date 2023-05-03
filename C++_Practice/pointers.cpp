#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;

    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Jorge";
    string *pName = &name;

    //pointer points to the memory address
    cout << "Age: " << pAge << endl;
    cout << "Gpa: " << pGpa << endl;
    cout << "name: " << pName << endl;

    //dereferencing a pointer - you use to pointer to get the value
    cout << "Age: " << *pAge << endl;

    return 0;
}