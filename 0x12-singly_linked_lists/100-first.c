#include <unistd.h>
#include <stdlib.h>

/**
 * before_main - function that runs before the main function
 *
 * This function is marked with the constructor attribute, which means that
 * it will be automatically called before the main function starts. Its purpose
 * is to print a message to the standard output file descriptor indicating
 * that the program is about to start.
 */

void __attribute__((constructor)) before_main()
{
char *msg = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
int len = sizeof(msg) - 1;
char *buffer = malloc(len);
int i;

for (i = 0; i < len; i++)
{
buffer[i] = msg[i];
}

write(STDOUT_FILENO, buffer, len);

free(buffer);
exit(0);
}

