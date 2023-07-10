#include <stdio.h>
#include <stdlib.h>
/* 
* main- prints the name of the command
*/

int main(int argc, char *argv[])
{
printf("./%s\n", argv[0]);
exit(EXIT_SUCCESS);
}