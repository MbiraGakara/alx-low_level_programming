#include <stdio.h>

/**
 * _islower - checks lower case characters
 *
 * Return: always 0
 */

int _islower(int c);

int main(void)
{
char input;
printf("Enter a character: ");
scanf("%c", &input);
if (_islower(input))
{
printf("%c is lowercase.\n", input);
}
else
{
printf("%c is not lowercase.\n", input);
}
return (0);

}
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

