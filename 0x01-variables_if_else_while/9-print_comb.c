#include <stdio.h>
/**
 * Description: main - Prints out a string to stdout.
 * Return: 0 if success.
 */
int main(void)
{
int b;

for (b = 0 ; b < 10; b++)
putchar(b + '0');
if (b < 9)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
