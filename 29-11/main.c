#include "Camping/camping.h"
#include "Camping/housing.h"

void camping();
void housing();

int main(){
    int esc = 1;

    char *command = malloc(256* sizeof(char));
    printf("Hi! This is a simple camping simulation made for a little course of C/C++\n"
                   "write menu for evoke this\n");
    while(esc) {
        printf(":c> ");
        scanf(" %s", command);
        if (strstr(command, "camping") != NULL) {
            camping();
        }
        if (strstr(command, "housing") != NULL) {
            housing();
        }
        if (strstr(command, "menu") != NULL) {
            printf("Menù:\n\tcamping -> enter camper mode (es1)\n\thousing -> enter housing mode(es2)\n");
        }

        if(strstr(command, "quit") != NULL){
            printf("Goodbye!");
            esc = 0;
        }
    }

    return 0;
}

void camping(){
    int esc = 1;
    char *command = malloc(256* sizeof(char));
    while(esc) {
        printf(":c>camping> ");
        scanf(" %s", command);
        if (strstr(command, "camper") != NULL) {
            cmp_emp_camperExit();
        }
        if (strstr(command, "bill") != NULL) {
            int camper = 0;
            printf("Enter camper id: ");
            scanf("%d", &camper);
            float bill = cmp_emp_bill(camper);
            if(bill == -1) printf("Camper not found!");
            else printf("Bill: %.2f€\n", bill/100);
        }
        if (strstr(command, "menu") != NULL) {
            printf("Menù:\n\tcamper -> add camper exit\n\tbill -> camper billing account\n");
        }

        if(strstr(command, "quit") != NULL){
            esc = 0;
        }
    }
}

void housing(){
    int esc = 1;
    char *command = malloc(256* sizeof(char));
    cmp_hs_houseInit();
    while(esc) {
        printf(":c>housing> ");
        scanf(" %s", command);
        if (strstr(command, "booking") != NULL) {
            cmp_hs_booking();
        }
        if (strstr(command, "menu") != NULL) {
            printf("Menù:\n\tbooking -> booking system startup\n");
        }
        if(strstr(command, "quit") != NULL){
            esc = 0;
        }
    }
}