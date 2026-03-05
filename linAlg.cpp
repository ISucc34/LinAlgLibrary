#include "linAlg.h"

mat ones(size_t r, size_t c)
{
    mat m;

    m.rows = r;
    m.cols = c;

    for(int i = 0; i < r; i++)
    {
        m.arr[i] = new int[c];
        for(int j = 0; j<c; j++)
        {
            m.arr[i][j] = 1;
        }
    }
    return m;
}


