#include <iostream>

using namespace std;
void reference() {
    int a = 10;

    int &r = a; //alias for a

    r++;
    cout << a << r;
}


int main() {
    reference();
    return 0;
}
