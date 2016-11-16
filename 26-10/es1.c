#include <stdio.h>

/*
*
*   Esercizio 1
*   Dato un array con N elementi di tipo Integer, stamparli a video, con indicazione sulla posizione del singolo elemento.
*   es.: [0] = 25
*/

void es1(int *array, size_t);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    es1(array, sizeof(array)/sizeof(array[0]));
}

void es1(int *array, size_t size){
    for(int i=0; i<size; i++)
        printf("[%d]=%d", i, array[i]);
}