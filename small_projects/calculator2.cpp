#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if(op == '+'){
        cout << num1 + num2;
    }else if(op == '-'){
        cout << num1 - num2;
    }else if(op == '*'){
        cout << num1 * num2;
    }else if(op == '/'){
        cout << num1 / num2;
    }else{
        cout << "Sorry invalid numer or operator";
    }

    return 0;
}