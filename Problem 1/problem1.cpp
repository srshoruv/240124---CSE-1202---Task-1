#include <iostream>
using namespace std;

class Book
{
    string title;
    string author;
    int publicationYear;

    public:
    Book()
    {
        title = "Unknown";
        author = "Unknown";
        publicationYear = 0;
    }
    Book(string title, string author, int publicationYear)
    {
        this->title = title;
        this->author = author;
        this->publicationYear = publicationYear;
    }

    void displayBookInfo()
    {
        cout << "The title is: " << title << endl;
        cout << "The author is: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }

    ~Book()
    {
        cout << "Book object for '" << title << "' is being destroyed.\n";
    }
};

int main() 
{
    
    Book b1, b2("OOP with CPP", "Balagurusamy", 2009);
    b1.displayBookInfo();
    b2.displayBookInfo();
    return 0;
}