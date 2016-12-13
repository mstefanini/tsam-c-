//
// Created by matte on 13/12/2016.
//

#ifndef MATRIX_MYMATRIX_H
#define MATRIX_MYMATRIX_H


class MyMatrix {
private:
    int mMatrix[10][10];
    int mDim = 10;

public:
    MyMatrix();
    void print();
    void printToFile();
    void sum();
    void mult();
    void avg();
    void sum4line();
    void sum4column();
    void minus4line();
    void minus4column();
    void diagonalSum();
};


#endif //MATRIX_MYMATRIX_H
