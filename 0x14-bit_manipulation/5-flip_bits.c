#include "main.h"

/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int z, tally = 0;
unsigned long int new;
unsigned long int undivided = n ^ m;

for (z = 63; z >= 0; z--)
{
new = undivided >> z;
if (new & 1)
tally++;
}

return (tally);
}
