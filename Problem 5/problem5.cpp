#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

    public:
    Point(int x_val, int y_val)
    {
        x = x_val;
        y = y_val;
    }

    Point(const Point &other)
    {
        x = other.x;
        y = other.y;
        cout << "Copy constructor called.\n";
    }

    void displayCoordinates()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }

    ~Point()
    {
        cout << "Simple Destructor.\n";
    }
};

int main()
{
    Point p1(7,10);
    Point p2 = p1;

    p1.displayCoordinates();
    p2.displayCoordinates();
    
    
    return 0;
}