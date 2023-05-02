#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << 45 << endl;

    cout << 5 + 2 << endl;
    cout << 5 - 2 << endl;
    cout << 5 * 2 << endl;
    cout << 9 /3 << endl;
    cout << 9 % 2 << endl;
    cout << (9 % 2) + 1 << endl;

    int wnum = 5;
    double dnum = 5.5;
    
    wnum++;
    cout << wnum << endl;

    wnum--;
    cout << wnum << endl;

    wnum += 80;
    cout << wnum << endl;

    cout << 5.5 + 90 << endl;
    cout << 10 / 3 << endl;
    cout << 10.0 / 3.0 << endl;

    cout << pow(2, 5) << endl;
    cout << sqrt(25) << endl;
    cout << round(4.3) << endl;
    cout << ceil(4.3) << endl;
    cout << floor(4.9) << endl;

    cout << fmax(9, 12) << endl;
    cout << fmin(9, 12) << endl;

    return 0;
}