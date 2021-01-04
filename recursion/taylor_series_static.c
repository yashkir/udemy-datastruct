#include <stdio.h>

double taylor(int x, int n) {
    static double p = 1;
    static double f = 1;
    static double t = 0;
    double answer;

    if (n == 0) {
        return 1;
    }

    t = taylor(x, n - 1);
    p *= x;
    f *= n;
    answer = t + p / f;

    printf("call t:%f x:%d n:%d p:%f f:%f = a:%f\n", t, x, n, p, f, answer);
    return answer;
}

int main() {
    int x = 4;
    int n = 10;
    double t = taylor(x, n);

    printf("Taylor x:%d n:%d = %f", x, n, t);

    return 0;
}
