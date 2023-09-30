#include "main.h"
#include "math.h"

/**
 * print_binary - prints a binary number without % or /
 * @n: The number to be printed.
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned int flag = 0, maxi = 32768; /* 1000 0000 0000 0000 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	
	while (maxi)
	{
		if (flag == 1 && (n & maxi) == 0)
			_putchar('0');

		else if ((n & maxi) != 0)
		{
			_putchar('1');
			flag = 1;
		}

		maxi >>= 1;
	}
}
