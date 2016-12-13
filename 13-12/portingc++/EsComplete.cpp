//
// Created by matte on 13/12/2016.
//

#include <iomanip>
#include "EsComplete.h"

EsComplete::EsComplete() {
    size = sizeof(array)/sizeof(array[0]);
    size_f = sizeof(array_f)/sizeof(array_f[0]);
}

void EsComplete::es1() {
    for(int i=0; i<size; i++)
        std::cout << "[" << i << "]=" << array[i] << std::endl;
}

void EsComplete::es2() {
    int sum = 0;
    for(int i=0; i<size; i++)
        sum += array[i];
    std::cout << sum << std::endl;
}

void EsComplete::es3() {
    int diff = 0;
    for(int i=0; i<size; i++)
        diff -= array[i];
    std::cout << diff << std::endl;
}

void EsComplete::es4() {
    int mult = 1;
    for(int i=0; i<size; i++)
        mult *= array[i];
    std::cout << mult << std::endl;
}

void EsComplete::es5() {
    float diff = array_f[0];
    for(int i=1; i<size_f; i++)
        diff -= array_f[i];
    std::cout << std::fixed << std::setw(8) << std::setprecision(2)
              << diff << std::endl;
}

void EsComplete::es6() {
    float sum = 0;
    for(int i=0; i<size_f; i++)
        sum += array_f[i];
    std::cout << std::fixed << std::setw(8) << std::setprecision(2)
              << sum << std::endl;
}

float EsComplete::es6_mod() {
    float sum = 0;
    for(int i=0; i<size_f; i++)
        sum += array_f[i];
    return sum/size;
}

void EsComplete::es7() {
    float med = 0;
    float div = 0;
    for(int i=0; i<size_f; i++){
        med += (array_f[i]*(size_f-i-1));
        div += i+1;
    }
    std::cout << std::fixed << std::setw(8) << std::setprecision(2)
              << med/div << std::endl;
}

void EsComplete::es8() {
    float max = array_f[0];
    float min = array_f[0];
    for(int i=0; i<size_f; i++){
        if(array_f[i]<min)
            min = array_f[i];
        else if(array_f[i]>max)
            max = array_f[i];
    }
    std::cout << std::fixed << std::setw(8) << std::setprecision(2)
              << "min: " << min
              << " max: " << max
              << " avg: " << this->es6_mod() << std::endl;
}

void EsComplete::es9() {
    qsort(array_f, size_f, sizeof(float), compare_decr);
    for(int i=0; i<size_f; i++){
        std::cout << std::fixed << std::setw(8) << std::setprecision(2)
                  << array_f[i];
    }
    std::cout << std::endl;

    qsort(array_f, size_f, sizeof(float), compare_incr);
    for(int i=0; i<size_f; i++){
        std::cout << std::fixed << std::setw(8) << std::setprecision(2)
                  << array_f[i];
    }
    std::cout << std::endl;
}

int compare_incr(const void *a, const void *b) {
    return *(float*)a - *(float*)b;
}

int compare_decr(const void *a, const void *b) {
    return -(*(float*)a - *(float*)b);
}
