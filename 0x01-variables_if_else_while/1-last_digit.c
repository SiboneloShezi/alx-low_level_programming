#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * Description: main - Prints out a string to stdout.
 * Return: 0 if success.
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	prinf("Last digit of n is greater than 5\n");
	else if (n < 6 && n == 0)
	printf("Last digit of n is less than 6 and not 0\n");
	else
	printf("Last digit of n is 0\n");
	return (0);
}
