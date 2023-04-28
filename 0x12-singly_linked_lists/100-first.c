#include <stdio.h>

void before_main(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main(void) 
{
before_main();
printf("This is the main function.\n");
return (0);
}

