#ifndef FILE_LIB_H_INCLUDED
#define FILE_LIB_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;/// Порядковый номер
    char *Name;///−	Наименование автомобиля
    char *Type;///Тип автомобиля
    char *Fuel;///Используемое топливо
    int Price;///Цена (руб.)
    int Year;///Год выпуска
    struct PI *next;///Указатель на следующий элемент списка элемент - PI
}PI;///project information

typedef struct {
    PI *head;///Заголовочный элемент
    int size;///Количество листов
} List;

readInfo(PI *info);///чтение

int deletee (int id, List *list); ///удаление

void output(List *list);///Вывод на экран

char *init(char *string);///выделение памяти под строку

void read(FILE *info, List *list); ///чтение с файла

PI *get(int id, List *list);///нахождение записи по id

void add(PI *inf, List *list);///добавление

List *makeList();///создание

void save(List *list, FILE *otvet);///вывод в файл

void end(List *list);///очистка


#endif // FILE_LIB_H_INCLUDED
