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
	int num, result = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
	/*int sum = 0, i = 1, j = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		while (i < argc)
		{
			for (; argv[argc][j]; j++)
			{
				if (!(isdigit(argv[argc][i])))
				{
					printf("Error\n");
					return (1);
				}
				sum += atoi(argv[i++]);
			}
			if (!(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			if (atoi(argv[i]) < 0)
			{
				printf("Error\n");
				continue;
			}

			sum += atoi(argv[i++]);
			
		}
		printf("%d\n", sum);
	}
		/*printf("%d\n", atoi(argv[i]));*/
}

