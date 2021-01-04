#include <cstdlib>
#include <iostream>

using namespace std;

class Matrix {
    private:
        int rows;
        int cols;
        int *ptr;
    public:
        Matrix(int rows, int cols);

        int sum();
        int get(int row, int col);
        void set(int row, int col, int value);
        void fill(int val);
        void print();

        ~Matrix();
};

Matrix::Matrix(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    ptr = (int *)malloc(sizeof(int) * rows * cols);
}

int Matrix::get(int row, int col) {
    return *(ptr + (row * cols) + col);
}

void Matrix::set(int row, int col, int val) {
    *(ptr + (row * cols) + col) = val;
}

void Matrix::fill(int val) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            this->set(i, j, val);
        }
    }
}

void Matrix::print() {
    int i, j;

    for (i = 0; i < rows; i++) {
        printf("row %d: ", i);
        for (j = 0; j < cols; j++) {
            printf("%d ", this->get(i, j));
        }
        printf("\n");
    }
}

Matrix::~Matrix() {
    free(ptr);
}

int Matrix::sum() {
    int i;
    int sum = 0;

    for (i = 0; i < rows * cols; i++) {
        sum += *(ptr + i);
    }

    return sum;
}

void test_Matrix() {
    Matrix m(5, 5);

    m.fill(0);
    m.fill(7);
    
    m.set(0, 0, 4);
    cout << m.get(0, 0) << '\n';
    m.set(1, 1, 3);
    cout << m.get(1, 1) << '\n';

    m.fill(2);
    cout << "sum : " << m.sum() << '\n';

    m.print();

    printf("test complete");
    return;
}

int main() {
    test_Matrix();
    return 0;
}
