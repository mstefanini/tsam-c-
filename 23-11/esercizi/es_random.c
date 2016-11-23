//
// Created by matte on 23/11/2016.
//

#include "esercizi.h"
#include <time.h>
#include <stdlib.h>

void es_random(){
    int max_range = 0;
    printf("Enter number dimension: ");
    scanf("%d", &max_range);
    srand(time(NULL));

    FILE *f;
    f = fopen(FILE_ES, "w");
    if(f){
        for(int i=0; i<max_range; i++){
            fprintf(f, "%d\n", rand()%1000+1);
        }
        fclose(f);
    }else{
        printf("Error when opening file!");
    }
}
