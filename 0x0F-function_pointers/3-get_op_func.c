#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * get_op_func - selects the correct function
 *to perform the operation asked by the user.
 *
 * @s: pointer to array to iterate
 * 
 * Return:  a pointer to the function that corresponds to the
 * operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	while (i < 5)
	{
		if (s == ops[i].op && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}