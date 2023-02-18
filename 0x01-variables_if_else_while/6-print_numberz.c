#include <stdio.h>
/**
 * Description: main - Prints out a string to stdout.
 * Return: 0 if success.
 */
int main(void)
{
int n;
for (n = 0 ; n <= 9 ; n++)
putchar(n + '0');
putchar('\n');
return (0);
}
