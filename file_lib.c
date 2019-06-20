#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "file_lib.h"
#include "Search_lib.h"
#include "menu_lib.h"
#include "sort_lib.h"

List *makeList() {///создание
    List *list = malloc(sizeof(List));
    if (!list) {
        return NULL;
    }
    list->head = NULL;
    list->size = 0;
    return list;
}

char *init(char *string) {///выделение памяти
    int len = strlen(string);
    char *str = (char *) malloc(len * sizeof(char));

    strcpy(str, string);
    return str;
}

    readInfo(PI *info) {
    info->Name = String("NAME: ");
    info->Type = String("TYPE: ");
    info->Price = Int("PRICE: ");
    info->Fuel = String("FUEL: ");
    info->Year = Int("YEAR: ");

    return info;
}

void add(PI *inf, List *list) {///добавление
    PI *current = NULL;
    inf->next = NULL;
    inf->id = 0;

    if (list->head == NULL) {
        list->head = inf;
    } else {
        inf->id++;
        current = list->head;
        while (current->next != NULL) {
            inf->id++;
            current = (PI *) current->next;
        }
        current->next = (struct PI *) inf;
    }
}

PI *get(int id, List *list) {
    PI *current = list->head;
    while (current != NULL) {
        if (current->id == id) {
            return current;
        }
        current = (PI *) current->next;
    }
    return NULL;
}

void read(FILE *info, List *list) {///чтение с файла
    if (info != NULL) {
        char scanner[1024];
        while(fgets(scanner, 1024, info)){
            PI *inf = malloc(sizeof(PI));
            int count = 0;
            char *words = strtok(scanner, ";");
            while (words != NULL) {
                if(count == 0) {
                    inf->Name = init(words);
                    strcpy(inf->Name,words);
                } else if(count == 1) {
                    inf->Type = init(words);
                    strcpy(inf->Type,words);
                } else if(count == 2) {
                    inf->Fuel = init(words);
                    strcpy(inf->Fuel,words);
                } else if(count == 3) {
                    inf->Price = atoi(words);
                } else if(count == 4) {
                    inf->Year = atoi(words);
                }
                count++;
                words = strtok(NULL, ";,");
            }
            add(inf, list);
        }
    }
}

void output(List *list) {

    PI *inf = list->head;
    if (inf == NULL) {
        printf("LIST IS EMPTY\n");
        return;
    }

    while (inf != NULL) {
        printf("ID: %d", inf->id);
        printf("\nNAME: %s", inf->Name);
        printf("\nTYPE: %s", inf->Type);
        printf("\nFUEL: %s", inf->Fuel);
        printf("\nPRICE: %d", inf->Price);
        printf("\nYEAR: %d\n", inf->Year);
        printf("\n");
        inf = (PI *) inf->next;
    }
}

void save(List *list, FILE *otvet) {
    PI *inf = list->head;
    if (inf == NULL)
        return;

    while (inf != NULL) {
        fprintf(otvet, "%s;%s;%s;%d;%d\n", inf->Name, inf->Type, inf->Fuel, inf->Price, inf->Year);
        inf = (PI *) inf->next;
    }
}



int deletee (int id, List *list) {///удаление
    PI *current = list->head;
    PI *previous = current;
    while (current != NULL) {
        if (current->id == id) {
            previous->next = current->next;
            if (current == list->head)
                list->head = (PI *) current->next;
            free(current);
            return 1;
        }
        previous = current;
        current = (PI *) current->next;
    }
    return 0;
}

void end(List *list) {
    PI *inf = list->head;
    PI *next = inf;
    while (inf != NULL) {
        next = (PI *) inf->next;
        free(inf);
        inf = next;
    }
    free(list);
}
