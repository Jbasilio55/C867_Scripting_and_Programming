#include <iostream>

using namespace std;

int main()
{
    int num = 10;

    for(int i = 0; i < num; i++){
        cout << "index: " << i << endl;
    }

    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    for(int i = 0; i < 7; i++){
        cout << arr[i] << endl;
    }
    
    return 0;
}