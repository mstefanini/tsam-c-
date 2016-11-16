#include <stdio.h>

/*
*   Esercizio 8
*   Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float, 
*   indicare il maggiore, il minore e il valore medio, stamparne il risultato a video
*/

int es6_mod(float *array, size_t size);
void es8(float *array, size_t);

int main(){
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    es8(array, sizeof(array)/sizeof(array[0]));
}

int es6_mod(float *array, size_t size){
    float sum = 0;
    for(int i=0; i<size; i++)
        sum += array[i];
    return sum/size;
}

void es8(float *array, size_t size){
    float max = array[0];
    float min = array[0];
    float sum;
    for(int i=0; i<size; i++){
        if(array[i]<min)
            min = array[i];
        else if(array[i]>max)
            max = array[i];
    }
    printf("min: %.2f\n max:%.2f\n avg:%.2f", min, max, es6(array));
}