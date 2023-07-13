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
	int num1, num2, result;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
	/*
	if (!(atoi(argv[1])))
	{
		printf("Error\n");
		exit(98);
	}
	*/
}
