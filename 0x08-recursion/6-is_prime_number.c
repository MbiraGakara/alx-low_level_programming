#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);

('int i = 2; i * i <= n; i++')
{
if (n % i == 0)
return (0);
}

return (1);
}

