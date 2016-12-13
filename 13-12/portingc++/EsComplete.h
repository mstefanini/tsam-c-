//
// Created by matte on 13/12/2016.
//

#ifndef HOMEWORK_01_ESCOMPLETE_H
#define HOMEWORK_01_ESCOMPLETE_H

#include <iostream>

class EsComplete {
private:
    float array_f[6] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int size;
    int size_f;

public:
    EsComplete();
    void es1();
    void es2();
    void es3();
    void es4();
    void es5();
    void es6();
    float es6_mod();
    void es7();
    void es8();
    void es9();

};

int compare_incr(const void*, const void*);
int compare_decr(const void*, const void*);


#endif //HOMEWORK_01_ESCOMPLETE_H
