//
// Created by Matteo Stefanini on 29/11/2016.
//

#include "camping.h"

Booking_list g_emp_list;

void cmp_emp_camperExit(){
    time_t _time = time(NULL);
    struct tm *_tm = localtime(&_time);
    Booking_emplacement *booking = malloc(sizeof(Booking_emplacement));
    booking->prev = g_emp_list.tail;
    booking->next = NULL;
    printf("Hi camper! Please enter your ID: ");
    scanf(" %d", &(booking->camper));
    printf("How many days? ");
    scanf(" %d", &(booking->days));
    if(_tm->tm_hour >= 10){
        printf("Sorry, you're too late. Days are increse by one\n");
        booking->days++;
    }
    printf("How many persons? ");
    scanf(" %d", &(booking->persons));
    while(booking->campfire != 'T' && booking->campfire != 'R'){
        printf("What type of campfire (T: Tent, R: Roulotte)? ");
        scanf(" %c", &(booking->campfire));
    }
    while(booking->vehicle != 'C' && booking->vehicle != 'M'){
        printf("What type of vehicle (C: Car, M: Moto)? ");
        scanf(" %c", &(booking->vehicle));
    }
    cmp_emp_list_add_bookingEmplacement(booking);

}

float cmp_emp_bill(int camper){
    Booking_emplacement *booking = cmp_emp_list_search(camper);
    if(booking == NULL) return -1;
    int price = 0;
    price = PRICE*booking->persons*booking->days;
    if(booking->campfire == 'T')
        price += PRICE_TENDA*booking->days;
    else if(booking->campfire == 'R')
        price += PRICE_ROULOTTE*booking->days;

    if(booking->vehicle == 'A')
        price += PRICE_AUTO*booking->days;
    else if(booking->vehicle == 'M')
        price += PRICE_MOTO*booking->days;

    return price;
}

Booking_emplacement* cmp_emp_list_search(int camper){
    Booking_emplacement *booking = g_emp_list.head;
    while(booking != NULL){
        if(booking->camper == camper){
            return booking;
        }
        booking = booking->next;
    }
    return NULL;
}

void cmp_emp_list_add_bookingEmplacement(Booking_emplacement *booking){
    if(g_emp_list.head == NULL){
        g_emp_list.head = booking;
    }else{
        if(g_emp_list.tail == NULL){
            g_emp_list.head->next = booking;
            g_emp_list.tail = booking;
        } else {
            g_emp_list.tail->next = booking;
            booking->prev = g_emp_list.tail;
            g_emp_list.tail = booking;
        }
    }
}