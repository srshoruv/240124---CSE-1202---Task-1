#include <iostream>
using namespace std;

class Counter
{
    int count;
    public:
    Counter()
    {
        count = 0;
    }

    void increment()
    {
        count++;
    }

    void getValue()
    {
        cout << "Current value is: " << count << endl;
    }

    ~Counter()
    {
        cout << "Counter object with final value '" << count << "' destroyed.\n";
    }

};

int main() 
{
    
    Counter c;
    c.increment();
    c.increment();
    c.getValue();


    return 0;
}