#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fib1, fib2, fib3;
fib1 = 0;
fib2 = 1;

for (count = 1; count <= 50; count++)
{
fib3 = fib1 + fib2;
printf("%lu", fib3);

fib1 = fib2;
fib2 = fib3;

if (count == 50)
printf("\n");
else
printf(", ");
}

return (0);
}
