//
// Created by matte on 23/11/2016.
//

#include "esercizi.h"

int es5(int test){
    int sum = 0;
    int count = 0;
    FILE *f = fopen(FILE_ES, "r");
    if(f){
        int number = 0;
        while(!feof(f)){
            fscanf(f, "%d", &number);
            sum += number;
            count++;
        }
    }else{
        printf("Error when opening file!");
    }

    if(test) printf("%d\n", sum/count);
    return sum/count;
}


