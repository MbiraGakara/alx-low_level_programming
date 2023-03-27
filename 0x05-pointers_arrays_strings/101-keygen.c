#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LEN 10
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char password[PASSWORD_LEN + 1];
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
srand(time(NULL));
for (int i = 0; i < PASSWORD_LEN; i++)
{
int index = rand() % sizeof(charset);
password[i] = charset[index];
}
password[PASSWORD_LEN] = '\0';
printf("%s\n", password);
return (0);
}
