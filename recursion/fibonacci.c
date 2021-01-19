#include <stdio.h>

int fib(int n) {
    if (n < 2)
        return n;
    return fib(n - 2) + fib(n - 1);
}

int main() {
    int x = 7;

    printf("Fib of %d is %d\n", x, fib(x));
}
