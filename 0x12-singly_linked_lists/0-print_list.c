#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the head of the list
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t count;

for (count = 0; h != NULL; count++, h = h->next)
{
printf("[%d] %s\n", h->len, h->str == NULL ? "(nil)" : h->str);
}

return (count);
}

