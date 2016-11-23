//
// Created by matte on 23/11/2016.
//

#include "esercizi.h"

void es6(){
    int number;
    int max = 0;
    int min = 0;
    int med = es5(0);
    FILE *f = fopen(FILE_ES, "r");
    if(f){
        while(!feof(f)){
            fscanf(f, "%d\n", &number);
            if(number > max) {
                max = number;
                if(min == 0){
                    min = max;
                }
            }
            else if(number < min)
                min = number;
        }
    }else{
        printf("Error when opening file!");
    }

    printf("Max: %d, Min: %d, Med: %d\n", max, min, med);
}