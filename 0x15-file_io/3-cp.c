#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_cushion(char *file);
void close_file(int fd);

/**
* create_cushion - Allocates 1024 bytes for a buffer.
* @file: The name of the file buffer is storing chars for.
* Return: A pointer to the newly-allocated buffer.
*/
char *create_cushion(char *file)
{
char *cushion;

cushion = malloc(sizeof(char) * 1024);

if (cushion == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (cushion);
}

/**
* close_file - Closes file descriptors.
* @ab: The file descriptor to be closed.
*/
void close_file(int ab)
{
int d;

d = close(ab);

if (d == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close ab %d\n", ab);
exit(100);
}
}

/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: If the argument count is incorrect - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
int from, to, read1, write1;
char *cushion;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

cushion = create_cushion(argv[2]);
from = open(argv[1], O_RDONLY);
read1 = read(from, cushion, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || read1 == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(cushion);
exit(98);
}

write1 = write(to, cushion, read1);
if (to == -1 || write1 == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(cushion);
exit(99);
}

read1 = read(from, cushion, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);

} while (read1 > 0);

free(cushion);
close_file(from);
close_file(to);

return (0);
}
