#include <stdio.h>
/**
 * Description: main - Prints out a string to stdout.
 * Return: 0 if success.
 */
int main(void)
{
char n;

n = 'z';
for (n = 'z' ; n >= 'a' ; n--)
putchar(n);
putchar('\n');
return (0);
}
