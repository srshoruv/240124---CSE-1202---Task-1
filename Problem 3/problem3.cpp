#include <iostream>
using namespace std;

class Student
{
    char* name;
    int studentID;

    public:
    Student(const char* name, int studentID)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->studentID = studentID;
    }

    ~Student()
    {
        cout << "Student '" << name << "' record deleted.\n";
        delete[] name; 
    }

    void display()
    {
        cout << "Student name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

int main()
{
    
    Student s("Shoruv",240124);
    s.display();
    
    return 0;
}