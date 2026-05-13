#include "linAlg.h"
#include <cstdlib>
#include <cstring>
#include <stdexcept>

ostream& operator<<(ostream& os, const mat& m) {
	for (int i = 0; i < m.rows; i++) {
		for (int j = 0; j < m.cols; j++) {
			cout << m.arr[i * m.cols + j] << " ";
		}
		cout << '\n';
	}
	return os;
}

mat::mat() {}

const size_t mat::getRow() { return this->rows; }

const size_t mat::getCol() { return this->cols; }

mat::mat(size_t r, size_t c) {
  this->cols = c;
  this->rows = r;

  this->arr = new int[r * c];
}
mat::mat(const mat &o) {
	this->cols = o.cols;
	this->rows = o.rows;
  	this->arr = new int[cols * rows];
	memcpy(arr, o.arr, cols * rows * sizeof(int));
}
mat::~mat() {
	delete [] arr;
}

mat& mat::operator=(const mat& o) {
	if (this == &o) return *this;
	delete [] arr;
	this->cols = o.cols;
	this->rows = o.rows;
  	this->arr = new int[cols * rows];
	memcpy(arr, o.arr, cols * rows * sizeof(int));
	return *this;
}
void mat::fill(int value) {
  for (int i = 0; i < this->rows * this->cols; i++) {
    this->arr[i] = value;
  }
}
void mat::identity() {

  if (this->rows != this->cols) {
    throw invalid_argument("Matrix must be square");
  }
  for (int i = 0; i < this->rows; i++) {
	this->arr[i * this->cols + i] = 1;
  }
}
void mat::random() {
	srand(time(nullptr));
  for (int i = 0; i < this->rows * this->cols; i++) {
    this->arr[i] = rand() % 10;
  }
}
int mat::getValue(int r, int c) {

  int x = this->arr[r * this->cols + c];

  return x;
}

void mat::setValue(int r, int c, int val) {
  this->arr[r * this->cols + c] = val;
}

mat mat::operator*(int scalar) {
	mat n(rows, cols);
  for (int i = 0; i < this->cols * this->rows; i++) {
    n.arr[i] = this->arr[i] * scalar;
  }
  return n;
}

// mat transform(mat m, int dimension) {}

void mat::transpose() {
	int *temp = new int[rows * cols];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			temp[j * rows + i] = arr[i * cols + j];
		}
	}

	delete [] this->arr;
	this->arr = temp;
}

mat operator*(mat &mLhs, mat &mRhs) {

  mat m(mLhs.getRow(), mRhs.getCol());

  if (mLhs.getCol() != mRhs.getRow()) {
    throw invalid_argument("Left hand side matrix columns do not match Right "
                           "hand side matrix rows");
  }

  for (int i = 0; i < mLhs.getRow(); i++) {
  }

  return m;
}
