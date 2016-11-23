//
// Created by matte on 23/11/2016.
//

#include "esercizi.h"

void es4(){
    double sum = 1;
    FILE *f = fopen(FILE_ES, "r");
    if(f){
        int number;
        while(!feof(f)){
            fscanf(f, "%d\n", &number);
            sum *= number;
        }
    }else{
        printf("Error when opening file!");
    }

    printf("%e\n", sum);
}