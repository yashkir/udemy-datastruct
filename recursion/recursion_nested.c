#include <stdio.h>

int f1(int n) {
    if (n > 100) {
        return n - 10;
    } else {
        return f1(f1(n + 11));
    }
}

int main() {
    int x = 95;

    printf("%d", f1(x));

    return 0;
}
