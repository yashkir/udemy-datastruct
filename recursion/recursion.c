#include <stdio.h>

// Tail Recursion
// Print on Ascent
void f1(int n) {
    if (n > 0) {
        printf("%d ", n);
        f1(n - 1);
    }
}

// Head Recursion
// Print on Return/Descent
void f2(int n) {
    if (n > 0) {
        f2(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int x = 10;

    f1(x);
    printf("\n");
    f2(x);

    return 0;
}
