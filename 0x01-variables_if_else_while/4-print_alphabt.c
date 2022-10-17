#include <stdio.h>

/**
 * main - Entry Point
 *
 *Return: Always 0 (success)
 */

int main(void)
{

char a = 97;
while (a < 123)
{
if (a != 101 && a != 113)
{
putchar(a);
}
a++;
}
putchar('\n');

return (0);
}
