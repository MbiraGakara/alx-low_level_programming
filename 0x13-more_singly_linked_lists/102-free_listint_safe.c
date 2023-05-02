#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - Frees a listint_t linked list.
* @h: Pointer to a pointer to the first node of the listint_t linked list.
*
* Return: The size of the list that was free'd.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current_node = *h, *next_node = NULL;
size_t count = 0;

while (current_node != NULL)
{
count++;
next_node = current_node->next;
free(current_node);
current_node = next_node;

if (current_node == *h)
{
*h = NULL;
break;
}
}

return (count);
}

