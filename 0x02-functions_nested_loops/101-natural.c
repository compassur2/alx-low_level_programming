#include <stdio.h>
/**
* main - main function
* Return: always 0
*/

int main(void)
{

int i, sum = 0;

for (int i = 0 ; i < 1024 ;  i++)
{
if ((i % 3 == 0 || i % 5 == 0))

sum = sum + i;
}
printf("%d\n", sum);
return (0);
}
