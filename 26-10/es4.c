#include <stdio.h>

/*
*   Esercizio 4
*   Dato un array con N elementi di tipo Float, eseguirne la moltiplicazione e stamparli a video con un numero di cifre decimali pari a 2. 
*/

void es4(int *array, size_t);

int main(){
    float array[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1};
    es4(array, sizeof(array)/sizeof(array[0]));
}

void es4(int *array, size_t size){
    int mult = 0;
    for(int i=0; i<size; i++)
        mult *= array[i];
    printf("%d\n", mult);
}