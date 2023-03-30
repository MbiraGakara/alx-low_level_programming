#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
    int digits = 1;
    int power = 1;
    int i;

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    /* Count the number of digits */
    while (n / power > 9) {
        digits++;
        power *= 10;
    }

    /* Print the digits */
    for (i = 0; i < digits; i++) {
        int digit = n / power;
        _putchar('0' + digit);
        n -= digit * power;
        power /= 10;
    }
}

