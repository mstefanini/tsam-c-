//
// Created by matte on 16/11/2016.
//

#include "bancomat.h"

int const PLAFOND = 10000;
int g_account = 0;
ListMovement g_list_movement;

int bnc_statement() {
    printf("Account statement: %d\n", g_account);
    printf("\tMovements:\n");
    Movement *mov = g_list_movement.first;
    int movIndex = 1;
    char *movString;
    while(mov != NULL){
        if(mov->type == 0)
            movString = "Withdrawal";
        else
            movString = "Deposit";
        printf("\t Movement %d\n\t\t type: %s\n\t\t value: %d\n\t\t time: %s\n", movIndex, movString, mov->value, asctime( localtime(&mov->time) ));
        mov = mov->next;
        movIndex++;
    }
    return 0;
}

int bnc_balance() {
    printf("Account balance: %d\n", g_account);
}

int bnc_withdrawal(int value) {
    if(value > g_account)
        printf("I can't do this operation: not enough money");
    else {
        g_account -= value;
        bnc_list_addMovement(0, value);
    }
    return 0;
}

int bnc_deposit(int value) {
    int accountTemp = g_account + value;
    if(accountTemp > PLAFOND)
        printf("I can't do this operation: plafond reach");
    else {
        g_account += value;
        bnc_list_addMovement(1, value);
    }
    return 0;
}

void bnc_list_addMovement(int type, int value) {
    Movement *mov = malloc(sizeof(Movement));
    mov->type = type;
    mov->value = value;
    mov->time = time(NULL);
    mov->prec = g_list_movement.last;
    mov->next = NULL;
    if(g_list_movement.first == NULL){
        g_list_movement.first = mov;
    }else{
        if(g_list_movement.last == NULL){
            g_list_movement.first->next = mov;
            g_list_movement.last = mov;
        } else {
            g_list_movement.last->next = mov;
            mov->prec = g_list_movement.last;
            g_list_movement.last = mov;
        }
    }
}
