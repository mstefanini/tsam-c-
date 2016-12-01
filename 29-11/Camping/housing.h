//
// Created by matte on 29/11/2016.
//

/*
 * Camping - Parte 2
 * Un camping ha a disposizione 10 casette da affittare per il periodo estivo di cui:
 * 7 da 4 persone
 * 3 da 2 persone
 * Tenendo presente che un cliente può affittare 1 sola casa per la propria famiglia
 * dove non vi è limite temporale, memorizzare i dati anagrafici e di permanenza,
 * predisponendo una stampa per ordine alfabetico e una per data di chiusura ùcontratto di affitto.
*/

#ifndef CAMPING_HOUSING_H
#define CAMPING_HOUSING_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct customer {
    char name[50];
    char surname[50];
} Customer;

typedef struct customer_element {
    Customer *customer;
    struct customer_element *prev;
    struct customer_element *next;
} Customer_element;

typedef struct customer_list {
    Customer_element *head;
    Customer_element *tail;
} Customer_list;

typedef struct booking_housing {
    Customer *customer;
    struct tm *period;
    struct booking_housing *next;
    struct booking_housing *prev;
} Booking_housing;

typedef struct housing_list {
    Booking_housing *head;
    Booking_housing *tail;
} Housing_list;

typedef struct house {
    int id;
    int persons;
    char name[50];
    char address[50];
    Housing_list *housing_list;
} House;



//Customer management
void cmp_hs_booking();
Customer* cmp_hs_createCustomer();

//List management
void cmp_hs_list_addBooking(int id, Customer *customer, struct tm *period);
int cmp_hs_list_searchFreeHouse(int persons);

//House management
void cmp_hs_houseInit();

#endif //CAMPING_HOUSING_H
