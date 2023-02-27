#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
char reverse = s[0];
int b = 0;
int z;

while (s[b] != '\0')
b++;
for (z = 0; z < b; z++)
{
b--;
reverse = s[z];
s[z] = s[b];
s[b] = reverse;
}
}
