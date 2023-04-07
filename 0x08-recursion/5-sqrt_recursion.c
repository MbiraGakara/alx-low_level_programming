#include "main.h"

/**
 * _sqrt - calculates the natural square root of a number
 *
 * @n: the number to calculate the square root of
 * @i: the current divisor to check
 *
 * Return: the natural square root of n, or -1 if it doesn't exist
 */
int _sqrt(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (_sqrt(n, 0));
}

