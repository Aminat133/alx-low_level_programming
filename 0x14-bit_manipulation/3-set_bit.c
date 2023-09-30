#include "main.h"


/**
 * set_bit - sets a bit  hmm at given index to 1.
 * @n: The number to set bit in.
 * @index: The index to set bit at.
 * Return: 1 if it worked, or -1 on error.
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maxi = 0x01;

	maxi <<= index;
	if (maxi == 0)
		return (-1);
	*n |= maxi;
	return (1);
}
