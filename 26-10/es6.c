#include <stdio.h>

/*
*   Esercizio 6
*   Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float, 
*   eseguirne la MEDIA ARITMETICA e stamparne il risultato a video
*/

void es6(float *array, size_t);

int main(){
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    es6(array, sizeof(array)/sizeof(array[0]));
}

void es6(float *array, size_t size){
    float sum = 0;
    for(int i=0; i<size; i++)
        sum += array[i];
    printf("%.2f\n", sum/size);
}