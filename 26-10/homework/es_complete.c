#include "es_complete.h"

void es1(int *array, size_t size){
    for(int i=0; i<size; i++)
        printf("[%d]=%d\n", i, array[i]);
}

void es2(int *array, size_t size){
    int sum = 0;
    for(int i=0; i<size; i++)
        sum += array[i];
    printf("%d\n", sum);
}

void es3(int *array, size_t size){
    int diff = 0;
    for(int i=0; i<size; i++)
        diff -= array[i];
    printf("%d\n", diff);
}

void es4(int *array, size_t size){
    int mult = 0;
    for(int i=0; i<size; i++)
        mult *= array[i];
    printf("%d\n", mult);
}

void es5(float *array, size_t size){
    float diff = array[0];
    for(int i=1; i<size; i++)
        diff -= array[i];
    printf("%.2f\n", diff);
}

void es6(float *array, size_t size){
    float sum = 0;
    for(int i=0; i<size; i++)
        sum += array[i];
    printf("%.2f\n", sum/size);
}

float es6_mod(float *array, size_t size){
    float sum = 0;
    for(int i=0; i<size; i++)
        sum += array[i];
    return sum/size;
}

void es7(float *array, size_t size){
    float med = 0;
    float div = 0;
    for(int i=0; i<size; i++){
        med += (array[i]*(size-i-1));
        div += i+1;
    }
    printf("%.2f\n", med/div);
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
    printf("min: %.2f\n max:%.2f\n avg:%.2f\n", min, max, es6_mod(array, size));
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