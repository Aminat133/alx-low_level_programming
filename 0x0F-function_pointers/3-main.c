#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - performs simple operations.
 *
 * @argc: argument count
 * @argv: argument array
 * Return: int, result of operation
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error1\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error2\n");
		exit(99);
	}
	printf("%i", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
