#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int luckyNums[] = {4, 8, 15, 16, 23, 42};

    luckyNums[0] = 100;
    cout << luckyNums[0] << endl;

    int nums[5];
    nums[0] = 3;
    nums[1] = 4;
    nums[2] = 5;
    nums[3] = 6;
    nums[4] = 7;

    cout << nums[4] << endl;
    return 0;
}