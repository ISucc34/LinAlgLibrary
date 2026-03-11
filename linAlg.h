#ifndef  LINALG_H
#define  LINALG_H

#include <iostream>
#include <vector>

using namespace std;

class mat{
private:
    //For n Dimensional matrices
    //Maybe do it recursively?
    //maybe multiply total dimensions, use as total for the loop, divide to get vectors
    vector<int> dimensions;
    vector<int> vec;

    
    // for 2D arrays
    size_t rows;
    size_t cols;
    
    int *arr;
    
public:
    mat(size_t r, size_t c);
    void fill(int value);
    void print();
    void setValue(int r, int c, int val);
    int getValue(int r, int c);
    


};


mat create(size_t r, size_t c);

mat fill(size_t r, size_t c, int value);

mat eye(size_t n);

mat transform(mat m, int dimension);

mat operator *(const mat &mLhs, const mat &mRhs);



#endif