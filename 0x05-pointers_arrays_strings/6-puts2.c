#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int z = 0;
int c = 0;
char *l = str;
int a;

while (*l != '\0')
{
l++;
z++;
}
t = z - 1;
for (a = 0 ; a <= c ; a++)
{
if (a % 2 == 0)
{
_putchar(str[a]);
}
}
_putchar('\n');
}
