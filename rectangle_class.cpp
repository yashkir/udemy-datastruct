#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int width;

    public:
        Rectangle (int l, int w)
        {
            length = l;
            width = w;
        }

        int area()
        {
            return length * width;
        }

        void changeLength(int l)
        {
            length = l;
        }
};

int main() {
    Rectangle r(5, 10);

    cout << r.area() << endl;
    r.changeLength(7);
    cout << r.area() << endl;

    return 0;
}
