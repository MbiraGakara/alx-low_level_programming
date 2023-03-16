#include <stdio.h>

int main(void) {
    printf("The size of char is %lu byte(s)\n", sizeof(char));
    printf("The size of short is %lu byte(s)\n", sizeof(short));
    printf("The size of int is %lu byte(s)\n", sizeof(int));
    printf("The size of long is %lu byte(s)\n", sizeof(long));
    printf("The size of long long is %lu byte(s)\n", sizeof(long long));
    printf("The size of float is %lu byte(s)\n", sizeof(float));
    printf("The size of double is %lu byte(s)\n", sizeof(double));
    printf("The size of long double is %lu byte(s)\n", sizeof(long double));

    return 0;
}

