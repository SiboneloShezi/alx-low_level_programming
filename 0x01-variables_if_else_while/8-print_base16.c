#include <stdio.h>
/**
 * Description: main - Prints out a string to stdout.
 * Return: 0 if success.
 */
int main(void)
{
int n;
char m;

n = 0;
m = 'a';
for (n = 0 ; n < 10 ; n++)
putchar(n + '0');
for (m = 'a' ; m <= 'f' ; m++)
putchar(m);
putchar('\n');
return (0);
}
