#ifndef MAIN_H
#define MAIN_H

/**
 *
 * *main.h - Header file containing declarations for all functions
 *
 * *       used in the directory.
 *
 * */


void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif