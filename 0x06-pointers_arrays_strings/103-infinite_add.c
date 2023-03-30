#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i, j;

if (len1 + 1 > size_r || len2 + 1 > size_r)
{
return 0;
}

i = len1 - 1;
j = len2 - 1;
r[size_r - 1] = '\0';

while (i >= 0 || j >= 0)
{
int d1 = i >= 0 ? n1[i] - '0' : 0;
int d2 = j >= 0 ? n2[j] - '0' : 0;
int sum = d1 + d2 + carry;

if (sum >= 10)
{
carry = 1;
sum -= 10;
} else {
carry = 0;
}

if (size_r <= 1)
{
return 0;
}

r[size_r - 2] = sum + '0';
size_r--;
i--;
j--;
}

if (carry) 
{
if (size_r <= 1)
{
return 0;
}

r[size_r - 2] = '1';
}

return r + size_r - strlen(r);
}

