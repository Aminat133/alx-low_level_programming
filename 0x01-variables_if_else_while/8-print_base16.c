#include <stdio.h>

/**
 * main - Entry Point
 *
 *Return: Always 0 (success)
 */

int main(void)
{

int a = 0;
char b = 97;

while (a < 10)
{
putchar(a + '0');
a++;
}

while (b < 103)
{
putchar(b);
b++;
}
putchar('\n');

return (0);
}
