#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int chances = 5;
    int guess; 
    
    while(secretNum != guess && chances > 0){
        cout << "guess the secret number (1-50), chances (" << chances << ") " << endl;
        cin >> guess;
        chances--;
    }

    if(chances > 0 && secretNum == guess){
        cout << "Congrats you guessed correctly" << endl;
    }else{
        cout << "Sorry you ran out of chances" << endl;
    }
    return 0;
}