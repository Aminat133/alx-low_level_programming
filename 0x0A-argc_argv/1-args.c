#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the
 * number of arguements
 * you passed into it
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (success)
 **/

int main(int argc, char *argv[])
{
    printf("%d\n", argc-1);
    (void)argv;
    return (0);
}
