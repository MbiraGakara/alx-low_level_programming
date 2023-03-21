#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
int first = 1, second = 2, next;
int sum = 2;
while (second <= 4000000)
{
next = first + second;
first = second;
second = next;
if (second % 2 == 0)
{
sum += second;
}
}
printf("%d\n", sum);
return (0);
}

