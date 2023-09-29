#include "main.h"

/**
 * clear_bit - this will sets a bit to 0 at given index.
 * it is a function.
 * @n: The number to set bit in.
 * @index: The index to set bit at.
 * Return: 1 if it worked, or -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maxi = 0x01;

	maxi = ~(maxi << index);
	if (maxi == 0x00)
		return (-1);

	*n &= maxi;
	return (1);
}
