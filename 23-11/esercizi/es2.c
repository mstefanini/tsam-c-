//
// Created by matte on 23/11/2016.
//

#include "esercizi.h"

void es2(){
    int sum = 0;
    FILE *f = fopen(FILE_ES, "r");
    if(f){
        int number;
        while(!feof(f)){
            fscanf(f, "%d\n", &number);
            sum += number;
        }
    }else{
        printf("Error when opening file!");
    }

    printf("%d\n", sum);
}