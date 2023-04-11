#include "main.h"

/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int z, tally = 0;
unsigned long int new;

for (z = 63; z >= 0; z--)
{
new = n >> z;

if (new & 1)
{
_putchar('1');
tally++;
}
else if (tally)
_putchar('0');
}
if (!tally)
_putchar('0');
}
