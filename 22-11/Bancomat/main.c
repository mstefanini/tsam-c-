#include "bancomat.h"

int main() {
    int esc = 1;

    char *command = malloc(256* sizeof(char));
    bnc_init();
    printf("Hi! This is a simple bancomat simulation made for a little course of C/C++\n"
                   "write menu for evoke this\n");
    while(esc) {
        printf(":c> ");
        scanf(" %s", command);
        if (strstr(command, "statement") != NULL) {
            bnc_statement();
        }
        if (strstr(command, "balance") != NULL) {
            bnc_balance();
        }
        if (strstr(command, "withdraw") != NULL){
            int value;
            printf("Insert value: ");
            scanf(" %d", &value);
            if(bnc_withdrawal(value) != 0)
                return -10;
        }
        if (strstr(command, "deposit") != NULL){
            int value;
            printf("Insert value: ");
            scanf(" %d", &value);
            if(bnc_deposit(value) != 0)
                return -11;
        }
        if (strstr(command, "quit") != NULL) {
            printf("Bye Bye! See you later! \n");
            esc = 0;
        }
        if (strstr(command, "menu") != NULL) {
            printf("Menù:\n\tdeposit -> for deposit a value\n\twithdraw -> for withdraw a value\n\tstatement -> for bank statement\n");
        }
    }

    return 0;
}