#include "main.h"

/**
* swap_int - swaps two variables value
* @a: value being switched
* @b: value being switched
*
*/
void swap_int(int *a, int *b)
{
int c = *b;
*b = *a;
*a = c;
}
