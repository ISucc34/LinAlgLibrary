#include "linAlg.h"

mat ones(size_t r, size_t c)
{
    mat m;

    m.rows = r;
    m.cols = c;

    for(size_t i = 0; i < r; i++)
    {
        m.arr[i] = new int[c];
        for(size_t j = 0; j < c; j++)
        {
            m.arr[i][j] = 1;
        }
    }
    return m;
}

mat zeros(size_t r, size_t c)
{
    mat m;

    m.rows = r;
    m.cols = c;
    m.arr  = new int*[r];

    for(size_t i = 0; i < r; i++)
    {
        m.arr[i] = new int[c];
        for(size_t j = 0; j < c; j++)
        {
            m.arr[i][j] = 0;
        }
    }
    return m;
}   


