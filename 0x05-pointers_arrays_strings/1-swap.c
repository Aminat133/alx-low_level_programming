#include "main.h"

/**
* 1-swap - swaps two variables value
* @a - value being switched
* @b - value being switched
*
*/
void swap_int(int *a, int *b)
{
int c = *b;
*b = *a;
*a = c;
}
