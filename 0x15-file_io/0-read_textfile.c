#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: z- actual number of bytes read and printed
* 0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *load;
ssize_t ab;
ssize_t z;
ssize_t a;

ab = open(filename, O_RDONLY);
if (ab == -1)
return (0);
load = malloc(sizeof(char) * letters);
a = read(ab, load, letters);
z = write(STDOUT_FILENO, load, a);

close(ab);
free(load);
return (z);
}
