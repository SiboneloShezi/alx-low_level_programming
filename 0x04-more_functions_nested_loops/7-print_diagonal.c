/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int a, d;

for (a = 0; a < a; a++)
{
for (d = 0; d < n; d++)
{
if (d == a)
_putchar('\\');
else if (d < a)
_putchar(' ');
}
_putchar('\n');
}
}
