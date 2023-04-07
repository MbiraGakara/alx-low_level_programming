#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the beginning of the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
/* Base case: empty string */
if (*s == '\0')
return (0);

/* Recursive case: move to next character */
return (1 + _strlen_recursion(s + 1));
}

