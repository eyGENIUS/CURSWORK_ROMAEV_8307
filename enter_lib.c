#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "file_lib.h"
#include "enter_lib.h"

int Int(char *message) {
    char string[1024];
    int result = 0;
    while (result != 1) {
        int i = 0;
        result = 1;
        printf(message);
        scanf("%s", &string);
        while (string[i] != '\0') {
            if(!isdigit(string[i])) {
                result = 0;
            }
            i++;
        }
    }
    return atoi(string);
}

 int String(char *message) {
    char str[1024];
    int result = 0;
    int k = 0;
    while (result != 1) {
        int i = 0;
        result = 1;
        printf(message);
        scanf("%s", str);
        while (str[i] != '\0') {
            if(str[i] == ';') {
                result = 0;
            }
            i++;
        }
    }

    return init(str);
}
