// Create by Matteo Stefanini



/*  Ogni mattina entro le 10 i campeggiatori
 *  che hanno terminato il proprio soggiorno devono lasciare libera la piazzola che hanno occupato.
    Ciascun campeggiatore deve dichiarare:
    - il numero di giorni trascorsi al camping
    - il numero di persone formanti il gruppo
    - il tipo di abitacolo ('T': tenda, 'R':roulotte)
    - il tipo di veicolo ('A': auto, 'M': moto)


    Calcolare e stampare quanto deve pagare ciascun gruppo in base a questo listino prezzi:
    - euro 5 per persona al giorno
    - euro 4 per tenda al giorno
    - euro 4,50 per roulotte al giorno
    - euro 5,50 per auto al giorno
    - euro 3,50 per moto al giorno
*/

#ifndef CAMPING_H
#define CAMPING_H

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define PRICE 500
#define PRICE_TENDA 400
#define PRICE_ROULOTTE 450
#define PRICE_AUTO 550
#define PRICE_MOTO 450

typedef struct booking_emplacement {
    int camper;
    int days;
    int persons;
    char campfire;
    char vehicle;

    struct booking_emplacement *prev;
    struct booking_emplacement *next;
} Booking_emplacement;

typedef struct booking_list {
    Booking_emplacement *head;
    Booking_emplacement *tail;
} Booking_list;

//List management emplacement
Booking_list g_emp_list;
Booking_emplacement* cmp_emp_list_search(int camper);
void cmp_emp_list_add_bookingEmplacement(Booking_emplacement *booking);

//Emplacement
void cmp_emp_camperExit();
float cmp_emp_bill(int camper);


#endif