#ifndef  LINALG_H
#define  LINALG_H

#include <iostream>
#include <vector>

using namespace std;

struct mat
{
    //For n Dimensional matrices
    vector<int> dimensions;

    
    // for 2D arrays
    size_t rows;
    size_t cols;
    
    int **arr;

};

mat ones(size_t r, size_t c);

mat zeros(size_t r, size_t c);










#endif