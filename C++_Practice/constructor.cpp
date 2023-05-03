#include <iostream>

using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;

        Book(string title, string author){
            this->title = title;
            this->author = author;
        }
};

int main()
{
    Book book1("Harry Potter", "JK Rowling");
    book1.pages = 500;

    Book book2("Lord of the Rings", "Tolkein");
    book2.pages = 700;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    return 0;
}