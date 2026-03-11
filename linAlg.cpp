#include "linAlg.h"

void mat::print(){
    for(int i = 0; i < this->cols*this->rows; i++)
    {
        cout << this->arr[i] << " ";
    }
   

}

mat::mat(size_t r, size_t c) {
    this->cols = c;
    this->rows = r;

    this->arr = new int(r*c);
}

void mat::fill(int value) {

    for(int i = 0; i < this->rows*this->cols; i++)
    {
        this->arr[i] = value;
    }
}


int mat::getValue(int r, int c){

    int x = this->arr[r*this->cols + c];

    return x;
}

void mat::setValue(int r, int c, int val)
{
    this->arr[r * this->cols + c] = val;
}



mat eye(size_t n)
{
    mat m(n,n);
    m.fill(0);

    for(int i = 0; i < n; i++)
    {
        m.setValue(i,i, 1);   
    }

    return m;
}

mat transform(mat m, int dimension);

/*mat operator *(const mat &mLhs, const mat &mRhs)
{
    if(mLhs.cols != mRhs.rows)
    {
        cout << "Left hand matrix columns is not equal to Right hand matrix rows";
    }
    
   mat product;


    return mLhs;
}*/