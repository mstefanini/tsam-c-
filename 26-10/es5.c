#include <stdio.h>

/*
*   Esercizio 5
*   Dato un array con N elementi di tipo Float, eseguirne la sottrazione e stamparli a video con un numero di cifre decimali pari a 2.
*/

void es5(float *array, size_t);

int main(){
    float array[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1};
    es5(array, sizeof(array)/sizeof(array[0]));
}

void es5(float *array, size_t size){
    float diff = array[0];
    for(int i=0; i<size-1; i++)
        diff -= array[i];
    printf("%.2f\n", diff);
}