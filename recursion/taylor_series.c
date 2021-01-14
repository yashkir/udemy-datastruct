#include <stdio.h>

double factorial(double n) {
    if (n < 2) { //OR n==0
        return 1;
    } else {
        return factorial(n - 1) * n;
    }
}

double power(double m, int n) {
    if (n == 0)
        return 1;
    return m * power(m, n - 1);
}

double taylor(double x, int n) {
    if (n == 0) {
        return 1;
    }
    return taylor(x, n - 1) + power(x, n) / factorial(n);
}

int main() {
    int x = 4;
    int n = 10;
    double t = taylor(x, n);

    printf("Taylor x:%d n:%d = %lf", x, n, t);

    return 0;
}
