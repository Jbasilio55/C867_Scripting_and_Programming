#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string color, pluralNoun, celebrity;

    cout << "choose a color: ";
    getline(cin, color);

    cout << "choose a plural noun: ";
    getline(cin, pluralNoun);

    cout << "choose a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}