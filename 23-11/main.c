//
// Created by matte on 23/11/2016.
//

#include <stdlib.h>
#include <string.h>
#include "esercizi/esercizi.h"

int main(){
    int esc = 1;
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
        }
        if(strstr(command, "es1") != NULL){
            printf("Ris es1: \n");
            es1();
        }
        if(strstr(command, "es2") != NULL){
            printf("Ris es2: \n");
            es2();
        }
        if(strstr(command, "es3") != NULL){
            printf("Ris es3: \n");
            es3();
        }
        if(strstr(command, "es4") != NULL){
            printf("Ris es4: \n");
            es4();
        }
        if(strstr(command, "es5") != NULL){
            printf("Ris es5: \n");
            es5(1);
        }
        if(strstr(command, "es6") != NULL){
            printf("Ris es6: \n");
            es6();
        }
    }
    return 0;
}