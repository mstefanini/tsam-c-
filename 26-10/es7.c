#include <stdio.h>

/*
*   Esercizio 7
*   Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
*   eseguirne la MEDIA PONDERATA con pesi pari alla corrispondente posizione inversa, e stamparne il risultato a video
*/

void es7(float *array, size_t);

int main(){
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    es7(array, sizeof(array)/sizeof(array[0]));
}

void es7(float *array, size_t size){
    float med = 0;
    float div = 0;
    for(int i=0; i<size; i++){
        med += (array[i]*(size-i-1));
        div += i+1;
    }
    printf("%.2f", med/div);
}