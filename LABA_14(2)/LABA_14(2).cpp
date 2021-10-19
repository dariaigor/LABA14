#include "Matrix.h"
int main()
{
    Matrix tmp(3, 3);
    tmp.setMatrix("123456789");
    tmp.print();
    
    MatrixTRUNGLE tmp2(5,5);
    tmp2.setMatrix("0123456789012345678912345");
    tmp2.print();
    tmp2.printTRUNGLE();
  
    return 0;
}