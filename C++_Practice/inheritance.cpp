#include <iostream>

using namespace std;

class Chef{
    public:
        void makeChicken(){
            cout << "The chef makes the chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes the salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes the bbq ribs" << endl;
        }
};

class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The italian chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout << "The italian chef makes chicken parm" << endl;
        }
};

int main()
{
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSalad();
    italianChef.makePasta();
    italianChef.makeSpecialDish();

    return 0;
}