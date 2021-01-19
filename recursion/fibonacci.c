#include <stdio.h>

#define MFIB_MAX 100

long F[MFIB_MAX];

int fib(int n) {
    if (n < 2)
        return n;
    return fib(n - 2) + fib(n - 1);
}

void mfib_init() {
    for (int i = 0; i < MFIB_MAX; i++) {
        F[i] = -1;
    }
}

/* Use memoisation to limit excessive recursion.
 * mfib_init() MUST be called first to initialize.
 */
long mfib(int n) {
    if (F[n] > 0) {
        // Valid memoisation found
        return F[n];
    } else {
        if (n < 2)
            //set and return base fibs
            return F[n] = n;
        else {
            // Check n-2 and n-1 memoizations
            if (F[n-2] < 0) {
                F[n-2] = mfib(n-2);
            }
            if (F[n-1] < 0) {
                F[n-1] = mfib(n-1);
            }

            //calculate and remember
            return F[n] = F[n-2] + F[n-1];
        }
    }
}

int main() {
    int x = 15;

    printf("Fib of %d is %d\n", x, fib(x));

    mfib_init();
    printf("MFib of %d is %ld\n", x, mfib(x));
}
