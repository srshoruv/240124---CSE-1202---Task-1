#include <iostream>
using namespace std;

class Box
{
    double length;
    double width;
    double height;

    public:
    Box()
    {
        length = 1.0;
        width = 1.0;
        height = 1.0;
    }
    Box(double length)
    {
        this->length = length;
        width = length;
        height = length;
    }

    Box(double length, double width, double height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    void calculateVolume()
    {
        double volume = length * width * height;
        cout << "Volume: " << volume << endl;
    }

    ~Box()
    {
        cout << "Box object dimensions: L: " << length << ", W: "<< width <<", H: " << height <<" destroyed.\n";
    }
};

int main()
{
    
    Box b1(5.7), b2(102,34.3,32.9);
    b1.calculateVolume();
    b2.calculateVolume();
    
    return 0;
}