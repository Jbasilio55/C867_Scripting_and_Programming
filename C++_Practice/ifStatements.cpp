#include <iostream>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = true;

    if(isMale && isTall)
    {
        cout << "You are a tall male \n";
    }
    else
    {
        cout << "You are not tall and not a male \n";
    }

    bool isRich = false;

    if(isMale && isTall && isRich)
    {
        cout << "You will get all the ladies \n";
    }
    else if(isMale || isTall)
    {
        cout << "You get some ladies \n";
    }else
    {
        cout << "You get no ladies \n";
    }

    return 0;
}