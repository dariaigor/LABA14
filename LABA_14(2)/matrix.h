#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Matrix
{
protected:
    int** mat;
    unsigned int rows;
    unsigned int cols;
public:
    Matrix();
    Matrix(const unsigned int, const unsigned int);
    ~Matrix();
    void setMatrix(const char*);
    int** getMatrix();
    void print();
};


class MatrixTRUNGLE:public Matrix 
{
public:
    MatrixTRUNGLE();
    MatrixTRUNGLE(const unsigned int, const unsigned int);
   void printTRUNGLE();
};