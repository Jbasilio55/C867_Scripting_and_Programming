#include <iostream>

using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa;

        Student(string name, string major, double gpa){
            this->name = name;
            this->major = major;
            this->gpa = gpa;
        }

        bool hasHonors(){
            if(gpa > 3.5){
                return true;
            }
            return false;
        }
};

int main()
{
    Student student1("John", "Business", 2.7);
    Student student2("Pamela", "Computer Science", 3.6);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;

    return 0;
}