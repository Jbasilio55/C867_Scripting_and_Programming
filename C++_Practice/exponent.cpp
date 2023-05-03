#include <iostream>

using namespace std;

int power(int baseNum, int powerNum){
    int total = 1;

    if(powerNum == 0){
        return 1;
    }

    for(int i = 0; i < powerNum; i++){
        total *= baseNum;
    }

    return total;
}

int main()
{
    cout << power(2, 4) << endl;

    return 0;
}