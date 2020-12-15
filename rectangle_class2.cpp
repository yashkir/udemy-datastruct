#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int width;

    public:
        // constructors
        Rectangle () { length = width = 1; };
        Rectangle (int l, int w);
        // facilitators
        int area();
        int perimiter();
        int getLength() { return length; };
        // mutators
        void setLength(int l) { length = l; };
        // destructor
        ~Rectangle();
};

// Rectangle Implementation

Rectangle::Rectangle (int l, int w)
{
    length = l;
    width = w;
}

int Rectangle::area()
{
    return length * width;
}

int Rectangle::perimiter()
{
    return 2 * (length + width);
}

Rectangle::~Rectangle()
{

}

int main() {
    Rectangle r(10, 5);

    cout << r.area() << endl;
    r.setLength(7);
    cout << r.area() << endl;

    return 0;
}
