#include <cstdlib>
#include <iostream>

using namespace std;

template <class T>
class Matrix {
    private:
        int rows;
        int cols;
        T *ptr;

    public:
        Matrix(int rows, int cols);

        T sum();
        T get(int row, int col);
        void set(int row, int col, T value);
        void fill(T val);
        void print();

        ~Matrix();
};

template <class T>
Matrix<T>::Matrix(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    ptr = (T *)malloc(sizeof(T) * rows * cols);
}

template <class T>
T Matrix<T>::get(int row, int col) {
    return *(ptr + (row * cols) + col);
}

template <class T>
void Matrix<T>::set(int row, int col, T val) {
    *(ptr + (row * cols) + col) = val;
}

template <class T>
void Matrix<T>::fill(T val) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            this->set(i, j, val);
        }
    }
}

template <class T>
void Matrix<T>::print() {
    int i, j;

    for (i = 0; i < rows; i++) {
        cout << "row " <<  i << ": ";
        for (j = 0; j < cols; j++) {
            cout << this->get(i, j) << ' ';
        }
        cout << '\n';
    }
}

template <class T>
Matrix<T>::~Matrix() {
    free(ptr);
}

template <class T>
T Matrix<T>::sum() {
    int i;
    T sum = 0;

    for (i = 0; i < rows * cols; i++) {
        sum += *(ptr + i);
    }

    return sum;
}

void test_Matrix() {
    Matrix<float> m(5, 5);

    m.fill(0.7);

    m.set(0, 0, 4.3);
    cout << m.get(0, 0) << '\n';

    m.set(1, 1, 3.0);
    cout << m.get(1, 1) << '\n';

    cout << "sum : " << m.sum() << '\n';

    m.print();

    printf("test complete");

    return;
}

int main() {
    test_Matrix();
    return 0;
}
