#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = strlen(str);
int start;

if (len % 2 == 0)
{
start = len / 2;
}
else
{
start = (len - 1) / 2;
}

for (int i = start; i < len; i++)
{
printf("%c", str[i]);
}

printf("\n");
}

