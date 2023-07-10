#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the number of arguements you passed into it
 * @argc: An argument counter
 * @argv: An argument values
 * return: Always 0 (success)
 **/

int main(int argc, char *argv[])
{
if (argv[0])
{
printf("%d\n", argc-1);
}
return 0;
}