#include <stdio.h>

double taylor(double x, int n) {
    double a = x / n;

    for (n--; n > 0; n--) {
        a = (a + 1) * (x / n);
    }
    a = (a + 1);

    return a;
}

int main() {
    int x = 4;
    int n = 10;
    double t = taylor(x, n);

    printf("Taylor x:%d n:%d = %lf", x, n, t);

    return 0;
}
