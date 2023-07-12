#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -adds positive numbers.
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (success)
 **/

int main(int argc, char *argv[])
{
	int sum = 0, i = 1;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		while (i < argc)
		{
			if (!(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			if (atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i++]);
		}
		printf("%d\n", sum);
		/*printf("%d\n", atoi(argv[i]));*/
	}
	return (0);
}
