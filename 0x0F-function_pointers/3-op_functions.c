#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sums a and b
 *
 * @a: integer
 * @b: integer
 *
 * Return: The result to sum a + b.
 */

int op_add(int a, int b)
{
	return (a + b);
}



/**
 * op_sub - sums a and b
 *
 * @a: integer
 * @b: integer
 *
 * Return: The result to subtraction a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}



/**
 * op_mul - sums a and b
 *
 * @a: integer
 * @b: integer
 *
 * Return: The result to multiplication a * b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}



/**
 * op_div - sums a and b
 *
 * @a: integer
 * @b: integer
 *
 * Return: The result to division a / b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}



/**
 * op_mod - sums a and b
 *
 * @a: integer
 * @b: integer
 *
 * Return: The result to mod of a and b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
