#include <stdio.h>

int fact(int n) {
    if (n < 2) {
        return 1;
    } else {
        return fact(n - 1) * n;
    }
}

/* possible r combinations of n numbers
 *
 *            n!
 *  nCr = -----------
 *        r! * (n-r)!
 */
int ncr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main () {
    int x = 2;
    int y = 1;

    printf("ncr(%d, %d) is %d", x, y, ncr(x, y));
}
