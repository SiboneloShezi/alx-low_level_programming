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
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;
	if (v > 5)
	printf("Last digit of %d is %d greater than 5\n", n, v);
	else if (v < 6 && v != 0)
	printf("Last digit of %d is %d less than 6 and not 0\n", n, v);
	else if (v == 0)
	printf("Last digit of %d is %d 0\n", n, v);
	return (0);
}
