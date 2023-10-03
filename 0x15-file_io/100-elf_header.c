#include <stdio.h>

/**
 * main - The entry point for the program to get the 
 * header of the ELF file
 * @argc: The number of arguments
 * @argv: The pointer to an array of arguments
 * Return: 1 on success, error code on failure
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
