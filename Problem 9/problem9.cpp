#include <iostream>
using namespace std;

class StringWrapper
{
    char* data;

    public:
    StringWrapper(const char* str)
    {
        data = new char[strlen(str)+1];
        strcpy(data,str);
    }

    ~StringWrapper()
    {
        delete[] data;
        cout<< "StringWrapper data freed.\n";
    }

    void printString()
    {
        cout << data << endl;
    }
};

int main()
{
    
    StringWrapper s1("Hello World!");
    StringWrapper s2 = s1;
    s1.printString();
    s2.printString();
    
    return 0;
}