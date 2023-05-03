#include <iostream>

using namespace std;

class Movie{
    private:
        string rating;
    public:
        string title;
        string director;

        Movie(string title, string director, string rating){
            this->title = title;
            this->director = director;
            this->rating = rating;
        }

        string getRating(){
            return this->rating;
        }

        void setRating(string rating){
            this->rating = rating;
        }

};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    avengers.setRating("R");

    cout << avengers.getRating() << endl;

    return 0;
}