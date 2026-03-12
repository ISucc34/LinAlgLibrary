#include "linAlg.h"

void mat::print(){
    for(int i = 0; i < this->rows; i++)
    {
        for (int j = 0; j<this->cols; j++)
        {
            cout << this->arr[i*this->cols+j] << " ";
        }
        cout << endl;
        
    }
}

const size_t mat::getRow()
{
    return this->rows;
}

const size_t mat::getCol()
{
    return this->cols;    
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

void mat::operator *(int scalar)
{
    for(int i = 0; i < this->cols*this->rows; i++)
    {
        this->arr[i] = this->arr[i] * scalar;
    }
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


mat operator *(mat mLhs, mat mRhs)
{

    mat m(mLhs.getRow(), mRhs.getCol());

    if(mLhs.getCol() != mRhs.getRow())
    {
        cout << "Left hand matrix columns is not equal to Right hand matrix rows";
    }
    
    

    return m;
}
