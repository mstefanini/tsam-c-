//
// Created by matte on 23/11/2016.
//




#include "esercizi.h"

void es1(){
    int number;
    FILE *f = fopen(FILE_ES, "r");
    if(f){
        while(!feof(f)){
            fscanf(f, "%d\n", &number);
            printf("%d\n", number);
        }
    }else{
        printf("Error when opening file!");
    }
}