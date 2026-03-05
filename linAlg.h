#ifndef  LINALG_H
#define  LINALG_H

#include <iostream>


using namespace std;

struct mat
{
    size_t rows;
    size_t cols;
    
    int **arr;

};

mat ones(size_t r, size_t c);

mat zeros(size_t r, size_t c);










#endif