#include "main.h"

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
int c;

c = 'A';
if (_isupper(c))
_putchar('1');
else
_putchar('0');
_putchar('\n');

c = 'a';
if (_isupper(c))
_putchar('1');
else
_putchar('0');
_putchar('\n');

return (0);
}

