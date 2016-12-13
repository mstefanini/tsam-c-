//
// Created by matte on 13/12/2016.
//

#include <time.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "MyMatrix.h"

MyMatrix::MyMatrix() {
    srand((unsigned)time(NULL));

    int i = 0;
    for (i=0; i <mDim; i++)
    {
        int j = 0;
        for (j=0;j<mDim;j++)
            mMatrix[i][j] = 1 + rand() % 50;
    }
}

void MyMatrix::print() {
    for (int i=0; i <mDim; i++)
    {
        for (int j=0;j<mDim;j++)
            std::cout << mMatrix[i][j] << "\t";

        std::cout << std::endl;
    }
}

void MyMatrix::sum() {
    int sum = 0;
    for(int i=0; i<mDim; i++)
    {
        for (int j=0; j<mDim ;j++)
            sum += mMatrix[i][j];
    }
    std::cout << "Sum: " << sum << std::endl;
}

void MyMatrix::mult() {
    double mult = 1;
    for(int i=0; i<mDim; i++)
    {
        for (int j=0; j<mDim ;j++)
            mult *= mMatrix[i][j];
    }
    std::cout << "Mult: " << std::scientific << mult << std::endl;
}

void MyMatrix::avg() {
    int sum = 0;
    for(int i=0; i<mDim; i++)
    {
        for (int j=0; j<mDim ;j++)
            sum += mMatrix[i][j];
    }
    std::cout << "Avg: " << sum/(mDim*mDim) << std::endl;
}

void MyMatrix::sum4line() {
    int sum = 0;
    for(int i=0; i<mDim; i++)
    {
        for (int j=0; j<mDim ;j++)
            sum += mMatrix[i][j];

        std::cout << "Sum line " << i+1 << ": " << sum << std::endl;
        sum = 0;
    }
}

void MyMatrix::sum4column() {
    int sum = 0;
    for(int i=0; i<mDim; i++)
    {
        for (int j=0; j<mDim ;j++)
            sum += mMatrix[j][i];

        std::cout << "Sum line " << i+1 << ": " << sum << std::endl;
        sum = 0;
    }
}

void MyMatrix::minus4line() {
    int min = 0;
    for(int i=0; i<mDim; i++)
    {
        for (int j=0; j<mDim ;j++)
            if(min == 0)
                min = mMatrix[i][j];
            else if(min > mMatrix[i][j])
                min = mMatrix[i][j];

        std::cout << "Minus line " << i+1 << ": " << min << std::endl;
        min = 0;
    }
}

void MyMatrix::minus4column() {
    int min = 0;
    for(int i=0; i<mDim; i++)
    {
        for (int j=0; j<mDim ;j++)
            if(min == 0)
                min = mMatrix[j][i];
            else if(min > mMatrix[j][i])
                min = mMatrix[j][i];

        std::cout << "Sum line " << i+1 << ": " << min << std::endl;
        min = 0;
    }
}

void MyMatrix::diagonalSum() {
    int sum = 0;
    for(int i=0; i<mDim; i++)
    {
        sum += mMatrix[i][i];
    }
    std::cout << "Sum: " << sum << std::endl;
}

void MyMatrix::printToFile() {
    std::fstream file;
    file.open("matrice.txt", std::fstream::in | std::fstream::out | std::fstream::app );
    if (file.is_open())
    {
        if (file.good()) {
            std::cout<<  "file aperto e OK" <<std::endl;
        }

        for(int i=0; i <10; i++)
        {
            int j = 0;
            for (j=0;j<10;j++) {
                // output in console con tabulazione
                file <<mMatrix[i][j]<<"\t";
            }
            file << std::endl;
        }
        file.close();
    }

}
