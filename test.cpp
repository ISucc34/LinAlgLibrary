/*

#include <iostream>

int main() {
    int r = 2;
    int c = 2;

    int *matrix = new int[r * c];
    
    for (int i = 0; i < r * c; i++) {
        matrix[i] = i;
    }

    int i = 1;
    int j = 1;

    // 2D to 1D index
    // width * row + column

    std::cout << matrix[c * i + j] << '\n';

    delete [] matrix;
}
    */