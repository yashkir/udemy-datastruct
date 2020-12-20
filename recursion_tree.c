#include <stdio.h>

// O(2^n) time
// O(n) space

void f(int n) {
    if (n > 0) {
        printf("%d ", n);
        f(n - 1);
        f(n - 1);
    }
}

int main() {
    f(3);
    printf("\n");
    f(5);

    return 0;
}
