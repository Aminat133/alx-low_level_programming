#include <stdio.h>
#include "main.h"

/**
 *  * main - Check description
 *   * Description: It prints the word Holberton, followed by a new line.
 *    * Return: Always 0 (success)
 *     
 */
int main(void)
{
char word[8] = "_putchar";
int i;

for (i = 0; i < 8; i++)
_putchar(word[i]);
_putchar('\n');
return (0);
}
