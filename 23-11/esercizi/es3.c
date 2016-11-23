//
// Created by matte on 23/11/2016.
//

#include "esercizi.h"

void es3(){
    int sum = 0;
    FILE *f = fopen(FILE_ES, "r");
    if(f){
        int number = 0;
        while(!feof(f)){
            fscanf(f, "%d", &number);
            if(sum == 0)
                sum = number;
            else
                sum -= number;
        }
        fclose(f);
    }else{
        printf("Error when opening file!");
    }

    printf("%d\n", sum);
}
