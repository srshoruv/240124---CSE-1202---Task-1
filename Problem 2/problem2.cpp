#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

    public:
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
    }

    void calculateArea()
    {
        int area = length * width;
        cout << "The area is: "<< area << endl;
    }

    void calculatePerimeter()
    {
        int perimeter = (length * width)*2;
        cout << "Perimeter: " << perimeter << endl;
    }

    ~Rectangle()
    {
        cout << "Rectangle object destroyed.\n";
    }
};

int main() 
{
    Rectangle r(7,8);
    r.calculateArea();
    r.calculatePerimeter();
    return 0;
}