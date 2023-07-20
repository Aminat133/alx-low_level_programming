#include <stdio.h>
#include "function_pointers.h"

/**
 * get_op_func - selects the correct function
 *to perform the operation asked by the user.
 *
 * @s: pointer to array to iterate
 * 
 * Return: an int
 */

int (*get_op_func(char *s))(int, int);