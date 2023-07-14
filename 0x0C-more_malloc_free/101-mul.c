#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (sucess)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result, i = 0, j = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	while (i < argc)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
	/*
	*if (!(atoi(argv[1])))
	*{
	*	printf("Error\n");
	*	exit(98);
	*}
	*/
}
