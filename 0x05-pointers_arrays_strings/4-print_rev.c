#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int z = 0;
int m;

while (*s != '\0')
{
z++;
s++;
}
s--;
for (m = z; m > 0; o--)
{
_putchar(*s);
s--;
}

_putchar('\n');
}
