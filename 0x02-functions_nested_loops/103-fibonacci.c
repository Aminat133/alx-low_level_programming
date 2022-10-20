#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long fib1 = 0, fib2 = 1, fib3 = 1;
float tot_sum;

while (fib3 < 4000000)
{

if ((fib3 % 2) == 0)
tot_sum += fib3;

fib1 = fib2;
fib2 = fib3;
fib3 = fib1 + fib2;
}
printf("%.0f\n", tot_sum);

return (0);
}
