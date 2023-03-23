#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
int div = 1, num = n;

if (n < 0)
{
_putchar('-');
num = -num;
}

while (num / div >= 10)
{
div *= 10;
}

while (div != 0)
{
_putchar((num / div) % 10 + '0');
div /= 10;
}
}

