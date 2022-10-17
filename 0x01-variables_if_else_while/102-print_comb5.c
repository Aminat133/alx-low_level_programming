#include <stdio.h>

/**
 * main - Entry Point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 10; digit1++)
{
for (digit2 = 1; digit2 < 10; digit2++)
{
for (digit3 = 0; digit3 < 10; digit3++)
{
for (digit4 = 0; digit4 < 10; digit4++)
{

if (digit1 == digit3 && digit2 == digit4)
continue;

putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');

putchar(' ');
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');

if (digit1 == 9 && digit2 == 8 && digit3 == 9 && digit4 == 9)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
