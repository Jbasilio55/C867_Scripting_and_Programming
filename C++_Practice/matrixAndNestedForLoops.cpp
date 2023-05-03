#include <iostream>

using namespace std;

int main()
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << matrix[1][2] << endl;

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << matrix[row][col] << endl;
        }
    }

    return 0;
}