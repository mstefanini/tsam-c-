#include "es_complete.h"
#include <string.h>



int main(){
    int esc = 1;
    float array_f[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    char *command = malloc(256* sizeof(char));
    printf("Hi! This is a simple application made for a little course of C/C++\n"
            "write menu for evoke this\n");
    while(esc){
        printf(":c> ");
        scanf("%s", command);
        if(strstr(command, "quit") != NULL){
            printf("Bye Bye! See you later! \n");
            esc = 0;
        }
        if(strstr(command, "windows") != NULL){
            printf("It's a fucking malware! Don't use it!\n");
        }
        if(strstr(command, "menu")!= NULL){
            printf("Action:\n ");
            printf("\t es1 -> see result of es1\n");
            printf("\t es2 -> see result of es2\n");
            printf("\t es3 -> see result of es3\n");
            printf("\t es4 -> see result of es4\n");
            printf("\t es5 -> see result of es5\n");
            printf("\t es6 -> see result of es6\n");
            printf("\t es7 -> see result of es7\n");
            printf("\t es8 -> see result of es8\n");
            printf("\t es9 -> see result of es9\n");
        }
        if(strstr(command, "es1") != NULL){
            printf("Ris es1: \n");
            es1(array, sizeof(array)/sizeof(array[0]));
        }
        if(strstr(command, "es2") != NULL){
            printf("Ris es2: \n");
            es2(array, sizeof(array)/sizeof(array[0]));
        }
        if(strstr(command, "es3") != NULL){
            printf("Ris es3: \n");
            es3(array, sizeof(array)/sizeof(array[0]));
        }
        if(strstr(command, "es4") != NULL){
            printf("Ris es4: \n");
            es4(array_f, sizeof(array_f)/sizeof(array_f[0]));
        }
        if(strstr(command, "es5") != NULL){
            printf("Ris es5: \n");
            es5(array_f, sizeof(array_f)/sizeof(array_f[0]));
        }
        if(strstr(command, "es6") != NULL){
            printf("Ris es6: \n");
            es6(array_f, sizeof(array_f)/sizeof(array_f[0]));
        }
        if(strstr(command, "es7") != NULL){
            printf("Ris es7: \n");
            es7(array_f, sizeof(array_f)/sizeof(array_f[0]));
        }
        if(strstr(command, "es8") != NULL){
            printf("Ris es8: \n");
            es8(array_f, sizeof(array_f)/sizeof(array_f[0]));
        }
        if(strstr(command, "es9") != NULL){
            printf("Ris es9: \n");
            es9(array_f, sizeof(array_f)/sizeof(array_f[0]));
        }
    }
    return 0;
}

