#include <stdio.h>

double taylor(double x, int n) {
    static double a = 1;

    if (n == 0)
        return a;
    else
        a = 1 + a * (x / n);

    return taylor(x, n - 1);
}

int main() {
    int x = 4;
    int n = 4;
    double t = taylor(x, n);

    printf("Taylor x:%d n:%d = %lf", x, n, t);

    return 0;
}
