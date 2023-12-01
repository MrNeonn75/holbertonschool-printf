/**
 * File : main_functions.c
 * 
 * Content : In this file we have the functions, which
 * prints data integer, char, float and etc.
*/

#include "main.h"
#include <string.h>
#include <stdarg.h>

/**
 * print_string : Prints string type data
*/

int print_string(char *str){
    int i;
    int count = 0;
    
    for (i = 0; i < (int)strlen(str); i++){
        _putchar(str[i]);
        count++;
    }

    return (count);
}