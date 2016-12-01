//
// Created by matte on 29/11/2016.
//

#include <time.h>
#include "housing.h"

Customer_list g_customer_list;
House houseArray[10];
int hsArrayReady = 0;

void cmp_hs_booking() {
    char response;
    int persons, house;
    Customer *customer;
    printf("Are you a new customer? [Y/n] ");
    scanf(" %c", &response);
    if (response == 'Y' || response == 'y')
        customer = cmp_hs_createCustomer();
    printf("How many in your party?");
    scanf(" %d", &persons);
    printf("I'm searching a free house\n");
    house = cmp_hs_list_searchFreeHouse(persons);
    if(house == -1) {
        printf("I'm sorry there isn't free house now\n");
    }else{
        printf("Free house founded!\n");
        struct tm *period = malloc(sizeof(struct tm));
        printf("Pls indicate final date [dd-mm-yyyy]:");
        scanf(" %d-%d-%d", &period->tm_mday, &period->tm_mon, &period->tm_year);
        cmp_hs_list_addBooking(house, customer, period);
    }
}



Customer* cmp_hs_createCustomer(){
    Customer *customer = malloc(sizeof(Customer));
    Customer_element *customer_element = malloc(sizeof(Customer_element));
    printf("Name: ");
    scanf(" %s", customer->name);
    printf("Surname: ");
    scanf(" %s", customer->surname);
    customer_element->customer = customer;
    customer_element->next = NULL;
    customer_element->prev = g_customer_list.tail;
    if(g_customer_list.head == NULL){
        g_customer_list.head = customer_element;
    }else{
        if(g_customer_list.tail == NULL){
            g_customer_list.head->next = customer_element;
            g_customer_list.tail = customer_element;
        } else {
            g_customer_list.tail->next = customer_element;
            customer_element->prev = g_customer_list.tail;
            g_customer_list.tail = customer_element;
        }
    }
    return customer;
}

void cmp_hs_houseInit(){
    if(hsArrayReady == 0)
        for(int i = 0; i<10; i++){
            strcpy(houseArray[i].address, "Via "+i);
            strcpy(houseArray[i].name, "Casa "+i);
            houseArray[i].id = i;
            if(i<7) houseArray[i].persons = 7;
            else houseArray[i].persons = 3;
            houseArray[i].housing_list = malloc(sizeof(struct tm));
        }
    hsArrayReady = 1;
}

void cmp_hs_list_addBooking(int id, Customer *customer, struct tm *period){
    Housing_list *list = houseArray[id].housing_list;
    Booking_housing *booking;
    booking->customer = customer;
    booking->period = period;
    booking->prev = list->tail;
    booking->next = NULL;
    if(list->head == NULL){
        list->head = booking;
        list->tail = booking;
    }else{
        if(list->tail == NULL){
            list->head->next = booking;
            list->tail = booking;
        } else {
            list->tail->next = booking;
            booking->prev = list->tail;
            list->tail = booking;
        }
    }
}

int cmp_hs_list_searchFreeHouse(int persons) {
    time_t _now = time(NULL);
    struct tm *now = malloc(sizeof(struct tm));
    localtime_r(&_now, now);
    int i = 0;
    while (i < 10) {
        if (houseArray[i].housing_list != NULL) {
            if (houseArray[i].housing_list->tail == NULL)
                return i;
            if (difftime(now, &houseArray[i].housing_list->tail->period) < 0
                    && houseArray[i].persons <= persons)
                return i;
        }else{
            houseArray[i].housing_list = malloc(sizeof(Housing_list));
        }
        i++;
    }
    return -1;
}
