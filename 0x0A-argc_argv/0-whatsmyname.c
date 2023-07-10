#include <stdio.h>
/* 
* main- prints the name of the command
*/

int main(int argc, char *argv[])
{
printf("./%s\n", *argv++);
return 0;
}