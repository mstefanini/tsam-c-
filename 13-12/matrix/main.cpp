#include <iostream>
#include "MyMatrix.h"

int main() {
    MyMatrix *myMatrix = new MyMatrix();
    myMatrix->print();
//    myMatrix->sum();
//    myMatrix->mult();
//    myMatrix->avg();
//    myMatrix->sum4line();
//    myMatrix->sum4column();
//    myMatrix->minus4line();
//    myMatrix->minus4column();
    myMatrix->diagonalSum();
    myMatrix->printToFile();
}