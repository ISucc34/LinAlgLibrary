#ifndef  LINALG_H
#define  LINALG_H

#include <iostream>
#include <vector>

using namespace std;

struct mat
{
    //For n Dimensional matrices
    //Maybe do it recursively?
    //maybe multiply total dimensions, use as total for the loop, divide to get vectors
    vector<int> dimensions;
    vector<int> vec;

    
    // for 2D arrays
    size_t rows;
    size_t cols;
    
    int **arr;

    void print();

};

mat ones(size_t r, size_t c);

mat zeros(size_t r, size_t c);

mat test(size_t arr[]);

mat eye(size_t n);




#endif