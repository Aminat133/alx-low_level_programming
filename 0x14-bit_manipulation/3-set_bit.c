#include "main.h"


/**
 * set_bit - sets a bit  hmm at given index to 1.
 * @n: The number to set bit in.
 * @index: The index to set bit at.
 * Return: 1 if it worked, or -1 on error.
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	n |= (1 << index);
	return (1);
}
