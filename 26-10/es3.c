#include <stdio.h>

/*
*   Esercizio 3
*   Dato un array con N elementi di tipo Integer, eseguirne la sottrazione e stamparla a video
*/

void es3(int *array, size_t);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    es3(array, sizeof(array)/sizeof(array[0]));
}

void es3(int *array, size_t size){
    int diff = 0;
    for(int i=0; i<size; i++)
        diff -= array[i];
    printf("%d\n", diff);
}