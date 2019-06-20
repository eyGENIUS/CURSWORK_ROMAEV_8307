#ifndef SEARCH_LIB_H_INCLUDED
#define SEARCH_LIB_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "file_lib.h"

void SearchId(List *list, int id);///Поиск по ID

void SearchName(List *list, char *name);///Поиск по названию

void SearchType(List *list, char *type);///Поиск по типу

void SearchFuel(List *list, char *fuel);///Поиск по топливу

void SearchYear(List *list, int year);///Поиск по году

void SearchPrice(List *list, int price);///Поиск по цене

#endif // SEARCH_LIB_H_INCLUDED
