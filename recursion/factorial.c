#include <stdio.h>

int fact(int n) {
    if (n < 2) { //OR n==0
        return 1;
    } else {
        return fact(n - 1) * n;
    }
}

int main() {
    printf("factorial is %d", fact(5));

    return 0;
}
