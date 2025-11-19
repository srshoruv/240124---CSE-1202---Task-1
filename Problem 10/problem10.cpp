#include <iostream>
using namespace std;

class Resource
{
    int id;

    public:
    Resource(int val)
    {
        id = val;
        cout << "Resource '" << id << "' acquired.\n";
    }

    ~Resource()
    {
        cout << "Resource '" << id << "' released.\n";
    }


};

int main()
{
    Resource r1(7),r2(10),r3(5);

    Resource* r4 = new Resource(30);

    delete r4;
    
    
    return 0;
}