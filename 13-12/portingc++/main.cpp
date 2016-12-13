//
// Created by matte on 13/12/2016.
//

#include "es_complete.h"
#include "EsComplete.h"
#include <string.h>



int main(){
    int esc = 1;
    EsComplete* esComplete = new EsComplete();
    char *command = (char*)malloc(256* sizeof(char));
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
            esComplete->es1();
        }
        if(strstr(command, "es2") != NULL){
            printf("Ris es2: \n");
            esComplete->es2();
        }
        if(strstr(command, "es3") != NULL){
            printf("Ris es3: \n");
            esComplete->es3();
        }
        if(strstr(command, "es4") != NULL){
            printf("Ris es4: \n");
            esComplete->es4();
        }
        if(strstr(command, "es5") != NULL){
            printf("Ris es5: \n");
            esComplete->es5();
        }
        if(strstr(command, "es6") != NULL){
            printf("Ris es6: \n");
            esComplete->es6();
        }
        if(strstr(command, "es7") != NULL){
            printf("Ris es7: \n");
            esComplete->es7();
        }
        if(strstr(command, "es8") != NULL){
            printf("Ris es8: \n");
            esComplete->es8();
        }
        if(strstr(command, "es9") != NULL){
            printf("Ris es9: \n");
            esComplete->es9();
        }
    }
    return 0;
}

