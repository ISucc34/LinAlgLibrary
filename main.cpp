#include <iostream>
#include "linAlg.h"

int main(){

    mat A = ones(2,2);

    for(int i = 0; i < A.rows; i++)
    {
        for(int j = 0; j < A.cols; j++)
        {
            cout << A.arr[i][j] << " ";
        }
        cout << endl;
        
    }
    return 0;
}