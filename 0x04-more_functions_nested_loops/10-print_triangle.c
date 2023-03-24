#include "main.h"

/**
 * print_triangle - Prints a triangle of size `size`
 *
 * @size: The size of the triangle to print
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
for (int i = 0; i < size; i++)
{
for (int j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

