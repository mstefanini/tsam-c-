#include <stdio.h>

/*
*   Esercizio 2
*   Dato un array con N elementi di tipo Integer, eseguirne la somma e stamparla a video
*/

void es2(int *array, size_t);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    es2(array, sizeof(array)/sizeof(array[0]));
}

void es2(int *array, size_t size){
    int sum = 0;
    for(int i=0; i<size; i++)
        sum += array[i];
    printf("%d\n", sum);
}