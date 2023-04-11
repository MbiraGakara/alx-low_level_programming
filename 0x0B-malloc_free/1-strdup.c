#include <stdlib.h>

/**
 * _strdup - duplicates a string using malloc
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string or NULL on failure
 */

char *_strdup(char *str)
{
char *dup_str;
int str_len = 0, i;

if (str == NULL)
{
return (NULL);
}

while (str[str_len] != '\0')
{
str_len++;
}
dup_str = malloc(sizeof(char) * (str_len + 1));

if (dup_str == NULL)
{
return (NULL);
}

for (i = 0; i < str_len; i++)
{
dup_str[i] = str[i];
}
dup_str[str_len] = '\0';

return (dup_str);
}

