#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char a;
a = 'a';

for (a = 'a' ; a <= 'z' ; a++)
putchar(a);
}
int main(void)
{
print_alphabet(void)
putchar('\n');
return (0);
}
