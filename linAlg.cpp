#include "linAlg.h"

void mat::print(){

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

mat ones(size_t r, size_t c)
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

mat eye(size_t n)
{
    mat m;

    m.rows = n;
    m.cols = n;
    m.arr  = new int*[n];

    for(int i = 0; i<n; i++)
    {
        m.arr[i] = new int[n];
        
        for(int j = 0; j<n; j++)
        {   
            m.arr[i][j] = 0;

        }
        m.arr[i][i] = 1;
    }

    return m;
    
}


