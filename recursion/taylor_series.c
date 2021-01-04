#include <stdio.h>

int factorial(int n) {
    if (n < 2) { //OR n==0
        return 1;
    } else {
        return factorial(n - 1) * n;
    }
}

int power(int m, int n) {
    if (n == 0)
        return 1;
    return m * power(m, n - 1);
}

int taylor(int x, int n) {
    if (n == 0) {
        return 1;
    }
    return taylor(x, n - 1) + power(x, n) / factorial(n);
}

int main() {
    int x = 3;
    int n = 30;
    int t = taylor(x, n);

    printf("Taylor x:%d n:%d = %d", x, n, t);

    return 0;
}
