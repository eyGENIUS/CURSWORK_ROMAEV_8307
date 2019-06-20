#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "file_lib.h"
#include "menu_lib.h"
#include "sort_lib.h"

void menu(List *list){
system("cls");
printf("0: Information about the creator\n");

printf("1: Print list\n");

printf("2: Edit note\n");

printf("3: Delete note \n");

printf("4: Add note\n");

printf("5: Search note\n");

printf("6: Sort\n");

printf("7: Exit");
    int choice;
    printf("\nYour choice: ");
    scanf("%d", &choice);

    if (choice == 0){
            system("cls");
            puts("creator: Romaev Evgenii 8307");
            printf("press anything: ");
            getch();
            menu(list);
    }
    else if (choice == 1){
        system("cls");
        output(list);
        printf("press anything: ");
        getch();
        menu(list);
    }
    else if (choice == 2){
        menuEdit(list);
        menu(list);
    }
    else if (choice == 3){
        menuDelete(list);
        menu(list);
    }
    else if (choice == 4){
         menuAdd(list);
         menu(list);
     }
     else if (choice == 5){
         menuSearch(list);
         menu(list);
     }
     else if (choice == 6){
         menuSort(list);
         menu(list);
     }
     else if (choice == 19){
        printf("10q for using my programm\n");
        printf("Press F to pay respect\n");
     }

}

void menuSearch(List *list) {
    int id = 0;
    system("cls");
    puts("0. ID");
    puts("1. Name");
    puts("2. Type");
    puts("3. Price");
    puts("4. Fuel");
    puts("5. Year");
    id = Int("Your choice: ");

    if (id == 0) {
        id = Int("Write id: ");
        puts("");
        SearchId(list, id);
    } else if (id == 1) {
        char *name = String("Write Name: ");
        puts("");
        SearchName(list, name);
    } else if (id == 2) {
        char *type = String("Write type: ");
        puts("");
        SearchType(list, type);
    } else if (id == 3) {
        int price = Int("Write a suitable price category: ");
        puts("");
        SearchPrice(list, price);
    } else if (id == 4) {
        int *fuel = String("Write fuel: ");
        puts("");
        SearchFuel(list, fuel);
    } else if (id == 5) {
        int year = Int("Write year: ");
        puts("");
        SearchYear(list, year);
    }
    printf("press anything: ");
    getch();
}

void menuAdd(List *list) {
    PI *inf = malloc(sizeof(PI));

    system("cls");

    readInfo(inf);

    add(inf, list);
    puts("Car information has been added");
    printf("press anything: ");
    getch();
}

void menuDelete(List *list){
    int id = 0;
    system("cls");
    id = Int("Write the id you want to delete: ");
    PI *info = get(id, list);

    if (info == NULL) {
        puts("LIST EMTY");
        printf("press anything: ");
        getch();
    } else {
        deletee(id, list);
        puts("Information was delete");
        printf("press anything: ");
        getch();
    }

}

void menuEdit(List *list){
    int id = 0;

    system("cls");
    id = Int("Write id: ");

    PI *inf = get(id, list);

    if (inf == NULL) {
        puts("LIST EMPTY");
        printf("press anything: ");
        getch();
    } else {
        readInfo(inf);

        puts("Information was edit");
        printf("press anything: ");
        getch();
    }
}

void menuSort(List *list) {
    int id = 0;
    system("cls");
    puts("0. ID");
    puts("1. Name");
    puts("2. Type");
    puts("3. Price");
    puts("4. Fuel");
    puts("5. Year");
    id = Int("Your choice: ");

    if (id == 0) {
        sortId(list);
    } else if (id == 1) {
        sortName(list);
    } else if (id == 2) {
        sortType(list);
    } else if (id == 3) {
        sortPrice(list);
    } else if (id == 4) {
        sortFuel(list);
    } else if (id == 5) {
        sortYear(list);
    }
    puts("List was sorted");
    printf("press anything: ");
    getch();
}
