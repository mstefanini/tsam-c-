#include <stdio.h>
#include <stdlib.h>

/*
*   Esercizio 9
*   Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
*   eseguire l’ordinamento crescente e decrescente, stamparne il risultato a video
*/


void es9(float *array, size_t);
int compare_incr(const void *a, const void *b);
int compare_decr(const void *a, const void *b);

int main(){
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    es9(array, sizeof(array)/sizeof(array[0]));
}


void es9(float *array, size_t size){
    qsort(array, size, sizeof(int), compare_decr);
    for(int i=0; i<size; i++){
        printf("%.2f ", array[i]);
    }
    printf("\n");

    qsort(array, size, sizeof(int), compare_incr);
    for(int i=0; i<size; i++){
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

int compare_incr(const void *a, const void *b){
    if(*((float*)a)<*((float*)b))
        return -1;
    if(*((float*)a)==*((float*)b))
        return 0;
    if(*((float*)a)>*((float*)b))
        return 1;
}

int compare_decr(const void *a, const void *b){
    if(*((float*)a)<*((float*)b))
        return 1;
    if(*((float*)a)==*((float*)b))
        return 0;
    if(*((float*)a)>*((float*)b))
        return -1;
}