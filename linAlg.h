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
    mat();
    mat(size_t r, size_t c);
	mat(const mat &o);
	~mat();
    void fill(int value);
    void identity();
    void random();
    void setValue(int r, int c, int val);
    int  getValue(int r, int c);
    
    void transpose();

    const size_t getRow();
    const size_t getCol();

    mat operator * (int scalar);
	mat& operator=(const mat& o);
    friend ostream& operator<<(ostream& os, const mat& dt);
};

mat transform(mat m, int dimension);

mat operator *(mat &mLhs, mat &mRhs);




#endif
