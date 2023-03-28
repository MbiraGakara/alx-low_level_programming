#include <stdio.h>
#include <string.h>

void puts_half(char *str) 
{
int length = strlen(str);
int start = (length % 2 == 0) ? length / 2 : (length - 1) / 2 + 1;

for (int i = start; i < length; i++)
{
printf("%c", str[i]);
}

printf("\n");
}

