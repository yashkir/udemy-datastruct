#include <stdio.h>

struct test {
    int A[5];
    int b;
};

void f(struct test *t) {
    t->A[1] = 55;
}

void fint(int *a) {
    (*a) = 55;
}

int main() {
    struct test t = {{1,2,3,4,5},10};

    f(&t);
    printf("%d", t.A[1]);

    return 0;
}
