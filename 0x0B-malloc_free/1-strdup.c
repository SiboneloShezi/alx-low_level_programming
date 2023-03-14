#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
char *abc;
int a, r = 0;

if (str == NULL)
return (NULL);
a = 0;
while (str[i] != '\0')
a++;

abc = malloc(sizeof(char) * (a + 1));

if (abc == NULL)
return (NULL);

for (r = 0; str[r]; r++)
abc[r] = str[r];

return (abc);
}
