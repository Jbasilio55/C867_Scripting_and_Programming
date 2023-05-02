#include <iostream>

using namespace std;

int main()
{
    string phrase = "Hello Everyone";

    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[2];

    cout << "" << endl;

    phrase[2] = 'B';
    cout << phrase << endl;
    cout << phrase.find("Everyone", 0) << endl;

    string phrasesub = phrase.substr(1, 5);
    cout << phrasesub << endl;
    return 0;
}