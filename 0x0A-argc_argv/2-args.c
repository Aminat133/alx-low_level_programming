#include <stdio.h>

/**
 * main -prints all arguments it receives.
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (success)
 **/

int main(int argc, char *argv[])
{
    while (0 < argc--)
    {
        printf("s%\n", *argv++);
    }
    return (0);
}