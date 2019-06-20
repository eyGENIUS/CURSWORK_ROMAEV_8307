#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "Search_lib.h"
#include "sort_lib.h"

void swap(PI *a, PI *b) {
    int k = 0;
    int id = a->id;

    char *Name = init(a->Name);

    char *Type = init(a->Type) ;

    char *Fuel = init(a->Fuel);

    int Price = a->Price;

    int Year = a->Year;

    a->id = b->id;
    a->Name = b->Name;
    a->Type = b->Type;
    a->Price = b->Price;
    a->Fuel = b->Fuel;
    a->Year = b->Year;

    b->id = id;
    b->Name = Name;
    b->Type = Type;
    b->Price = Price;
    b->Fuel = Fuel;
    b->Year = Year;
}

void sortId(List *list) {
    int swapped;
    PI *inf;
    PI *infNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        inf = list->head;

        while (inf->next != NULL) {
            infNext = (PI *) inf->next;
            if (inf->id > infNext->id) {
                swap(inf, (PI *) inf->next);
                swapped = 1;
            }
            inf = (PI *) inf->next;
        }
        inf = infNext;
    } while (swapped);
}

void sortName(List *list) {
    int swapped;
    PI *inf;
    PI *infNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        inf = list->head;

        while (inf->next != NULL) {
            infNext = (PI *) inf->next;
            if (strcmp(inf->Name, infNext->Name) > 0) {
                swap(inf, (PI *) inf->next);
                swapped = 1;
            }
            inf = (PI *) inf->next;
        }
        inf = infNext;
    } while (swapped);
}

void sortType(List *list) {
    int swapped;
    PI *inf;
    PI *infNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        inf = list->head;

        while (inf->next != NULL) {
            infNext = (PI *) inf->next;
            if (strcmp(inf->Type, infNext->Type) > 0) {
                swap(inf, (PI *) inf->next);
                swapped = 1;
            }
            inf = (PI *) inf->next;
        }
        inf = infNext;
    } while (swapped);
}

void sortFuel(List *list) {
    int swapped;
    PI *inf;
    PI *infNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        inf = list->head;

        while (inf->next != NULL) {
            infNext = (PI *) inf->next;
            if (strcmp(inf->Fuel, infNext->Fuel) > 0) {
                swap(inf, (PI *) inf->next);
                swapped = 1;
            }
            inf = (PI *) inf->next;
        }
        inf = infNext;
    } while (swapped);
}

void sortYear(List *list) {
    int swapped;
    PI *inf;
    PI *infNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        inf = list->head;

        while (inf->next != NULL) {
            infNext = (PI *) inf->next;
            if (inf->Year > infNext->Year) {
                swap(inf, (PI *) inf->next);
                swapped = 1;
            }
            inf = (PI *) inf->next;
        }
        inf = infNext;
    } while (swapped);
}

void sortPrice(List *list) {
    int swapped;
    PI *inf;
    PI *infNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        inf = list->head;

        while (inf->next != NULL) {
            infNext = (PI *) inf->next;
            if (inf->Price > infNext->Price) {
                swap(inf, (PI *) inf->next);
                swapped = 1;
            }
            inf = (PI *) inf->next;
        }
        inf = infNext;
    } while (swapped);
}
