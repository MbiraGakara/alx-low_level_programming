#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5];
int *p;

a[2] = 1024;
p = &a[2];

printf("a[2] = %d\n", *(p + 3));

	return (0);
}

