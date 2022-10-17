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
putchar(a);
a++;
}
a = 65;

while (a < 91)
{
putchar(a);
a++;
}

putchar('\n');

return (0);
}
