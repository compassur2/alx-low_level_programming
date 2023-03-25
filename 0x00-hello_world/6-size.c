#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: always 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char:%zu 1 byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int:%zu 4 byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int:%zu 4 byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int:%zu 8 byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float:%zu 4 byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
