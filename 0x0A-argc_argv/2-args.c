#include <stdio.h>

/**
 * main -prints all arguments it receives.
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (success)
 **/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
