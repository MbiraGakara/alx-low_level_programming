#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s)
    {
        len++;
        s++;
    }

    return (len);
}

/**
 * is_palindrome_helper - helper function for is_palindrome
 * @s: the string to check
 * @start: the starting index
 * @end: the ending index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
    {
        return (1);
    }

    if (s[start] == s[end])
    {
        return (is_palindrome_helper(s, start + 1, end - 1));
    }

    return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);

    if (len == 0 || len == 1)
    {
        return (1);
    }

    return (is_palindrome_helper(s, 0, len - 1));
}

