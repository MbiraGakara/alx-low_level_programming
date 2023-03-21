#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
int a = 1, b = 2, c, count;

printf("%d, %d", a, b);
count = 2;

while (count < 98)
{
c = a + b;
printf(", %d", c);
a = b;
b = c;
count++;
}

printf("\n");
return (0);
}

