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
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	get_op_func(argv[2])(argv[1], argv[3]);
	
 }