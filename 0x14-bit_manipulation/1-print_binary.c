#include <stdio.h>

/**
* print_binary - prints the binary representation of a number
* @n: the number to print in binary
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1;

mask <<= (sizeof(unsigned long int) * 8) - 1;

if (n == 0)
{
putchar('0');
return;
}

while (mask)
{
if (n & mask)
putchar('1');
else
putchar('0');

mask >>= 1;
}
}

