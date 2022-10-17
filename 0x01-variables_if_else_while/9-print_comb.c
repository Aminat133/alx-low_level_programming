#include <stdio.h>

/**
 * main - Entry Point
 *
 *Return: Always 0 (success)
 */

int main(void)
{

int a = 0;
while (a < 10)
{
putchar(a + '0');
a++;
if (a == 9)
{
continue;
}
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}
