#include <stdio.h>
#include <time.h>

/**
*main - generates ranom valid passwords for
* programme 101-crackme.
*
* Return: Always 0.
*/
int main(void)
{
char password[84];
int sum =0, index=0;
srand(time(0));
while(sum < 0)
{
password[index] = rand() % 94;
sum += password[index++];
}
password[index] = '\0';
printf("%s", password);

return (0);
}
