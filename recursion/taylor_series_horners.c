#include <stdio.h>

double taylor(double x, int n) {
    double a = 1;

    for (; n > 0; n--) {
        a = 1 + a * (x / n);
    }

    return a;
}

int main() {
    int x = 4;
    int n = 4;
    double t = taylor(x, n);

    printf("Taylor x:%d n:%d = %lf", x, n, t);

    return 0;
}
