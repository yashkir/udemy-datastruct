#include <stdio.h>

int f1(int n) {
    static int x = 0;

    if (n > 0) {
        x++;
        return f1(n - 1) + x;
    }
    return 0;
}

int main() {
    int a = 5;

    printf("%d", f1(a));
    printf("\n");
    printf("%d", f1(a));

    return 0;
}
