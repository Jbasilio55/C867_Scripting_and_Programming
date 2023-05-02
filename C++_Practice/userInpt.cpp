#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // use cin for user to input anything from terminal
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old" << endl;

    // use >> ws if you ask a prompt and then getline
    string name;
    cout << "Enter in you name: ";
    getline(cin >> ws, name);

    cout << "Hello " << name;

    return 0;
}