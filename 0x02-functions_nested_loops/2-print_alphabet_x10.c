#include "main.h"


/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/

void print_alphabet_x10(void)
{
char i = 'a';
int n = 0;

while (n < 10)
{
while (i <= 'z')
{
_putchar(i);
i++;
}
}
_putchar('\n');
n++;
}
