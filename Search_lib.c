#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "file_lib.h"
#include "Search_lib.h"

void SearchId(List *list, int id) {
    PI *inf = list->head;
    int c = 0;
    while (inf != NULL) {
        if(inf->id == id) {
         printf("ID: %d", inf->id);
        printf("\nNAME: %s", inf->Name);
        printf("\nTYPE: %s", inf->Type);
        printf("\nFUEL: %s", inf->Fuel);
        printf("\nPRICE: %d", inf->Price);
        printf("\nYEAR: %d\n", inf->Year);
            printf("\n");
            c++;
        }
        inf = (PI *) inf->next;
    }
    if(c == 0) {
        printf("LIST IS EMPTY\n");
    }
}

void SearchYear(List *list, int year) {
    PI *inf = list->head;
    int c = 0;
    while (inf != NULL) {
        if(inf->Year == year) {
            printf("ID: %d", inf->id);
            printf("\nNAME: %s", inf->Name);
            printf("\nTYPE: %s", inf->Type);
            printf("\nFUEL: %s", inf->Fuel);
            printf("\nPRICE: %d", inf->Price);
            printf("\nYEAR: %d\n", inf->Year);
            printf("\n");
            c++;
        }
        inf = (PI *) inf->next;
    }
    if(c == 0) {
        printf("LIST IS EMPTY\n");
    }
}

void SearchPrice(List *list, int price) {
    PI *inf = list->head;
    int c = 0;
    while (inf != NULL) {
        if(inf->Price < price) {
         printf("ID: %d", inf->id);
         printf("\nNAME: %s", inf->Name);
         printf("\nTYPE: %s", inf->Type);
         printf("\nFUEL: %s", inf->Fuel);
         printf("\nPRICE: %d", inf->Price);
         printf("\nYEAR: %d\n", inf->Year);
            printf("\n");
            c++;
        }
        inf = (PI *) inf->next;
    }
    if(c == 0) {
        printf("LIST IS EMPTY\n");
    }
}

void SearchName(List *list, char *name) {
    PI *inf = list->head;
    int c = 0;
    while (inf != NULL) {
        if(strcmp(inf->Name, name) == 0) {
        printf("ID: %d", inf->id);
        printf("\nNAME: %s", inf->Name);
        printf("\nTYPE: %s", inf->Type);
        printf("\nFUEL: %s", inf->Fuel);
        printf("\nPRICE: %d", inf->Price);
        printf("\nYEAR: %d\n", inf->Year);
            printf("\n");
            c++;
        }
        inf = (PI *) inf->next;
    }
    if(c == 0) {
        printf("LIST IS EMPTY\n");
    }
}

void SearchType(List *list, char *type) {
    PI *inf = list->head;
    int c = 0;
    while (inf != NULL) {
        if(strcmp(inf->Type, type) == 0) {
        printf("ID: %d", inf->id);
        printf("\nNAME: %s", inf->Name);
        printf("\nTYPE: %s", inf->Type);
        printf("\nFUEL: %s", inf->Fuel);
        printf("\nPRICE: %d", inf->Price);
        printf("\nYEAR: %d\n", inf->Year);
            printf("\n");
            c++;
        }
        inf = (PI *) inf->next;
    }
    if(c == 0) {
        printf("LIST IS EMPTY\n");
    }
}

void SearchFuel(List *list, char *fuel) {
    PI *inf = list->head;
    int c = 0;
    while (inf != NULL) {
        if(strcmp(inf->Fuel, fuel) == 0) {
        printf("ID: %d", inf->id);
        printf("\nNAME: %s", inf->Name);
        printf("\nTYPE: %s", inf->Type);
        printf("\nFUEL: %s", inf->Fuel);
        printf("\nPRICE: %d", inf->Price);
        printf("\nYEAR: %d\n", inf->Year);
            printf("\n");
            c++;
        }
        inf = (PI *) inf->next;
    }
    if(c == 0) {
        printf("LIST IS EMPTY\n");
    }
}
