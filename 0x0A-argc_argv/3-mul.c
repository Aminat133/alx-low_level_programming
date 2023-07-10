#include <stdio.h>
#include <stdlib.h>

/**
 * main -multiplies two numbers.
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (success)
 **/

int main(int argc, char *argv[])
{
    int mult;
    if (argc != 3)
    {
        printf("error\n");
        return (1);
    }
    else
    {
         mult = atoi(argv[1]) * atoi(argv[2]);
        printf("%d\n", mult);
        return (0);
    }
   
}