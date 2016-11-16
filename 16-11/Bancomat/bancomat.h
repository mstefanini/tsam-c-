//
// Created by matte on 16/11/2016.
//

#ifndef BANCOMAT_BANCOMAT_H
#define BANCOMAT_BANCOMAT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Movement {
    int type;
    int value;
    time_t time;

    struct Movement *prec;
    struct Movement *next;
} Movement ;

typedef struct ListMovement {
    Movement *first;
    Movement *last;

} ListMovement;

int const PLAFOND;
int g_account;
ListMovement g_list_movement;

int bnc_statement();
int bnc_withdrawal(int value);
int bnc_deposit(int value);
int bnc_balance();

void bnc_list_addMovement(int type, int value);

#endif //BANCOMAT_BANCOMAT_H
