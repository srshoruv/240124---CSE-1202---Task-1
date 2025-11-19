#include <iostream>
#include <fstream>
using namespace std;

class Logger
{
    ofstream file;
    string filename;

    public:
    Logger(const string& filename)
    {
        this->filename = filename;
        file.open(this->filename);
        cout << "Log file '" << filename << "' opened.\n";
    }

    ~Logger()
    {
        file.close();
        cout << "Log file '" << filename << "' closed.\n";
    }

    void logMessage(const string& message)
    {
        file << message << endl;
    }
};

int main()
{
    Logger l("testFile.txt");
    l.logMessage("Hello World!\n");
    l.logMessage("Myself Shoruv.\n");
    l.logMessage("StudentID: 240124\n");
    
    
    return 0;
}