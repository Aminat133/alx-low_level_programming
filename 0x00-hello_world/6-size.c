#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int inttype;
char chartype;
long int long_inttype;
long long ing long_long_inttype;
float floattype;

/* print sizes of data types*/
printf("Size of a char: %c byte(s)\n", sizeof(chartype));
printf("Size of an int: %i byte(s)\n", sizeof(inttype));
printf("Size of a long int: %i byte(s)\n", sizeof(long_inttype));
printf("Size of a long long int: %i byte(s)\n", sizeof(long_long_inttype));
printf("Size of a float: %d byte(s)\n", sizeof(floattype));

return (0);
}
