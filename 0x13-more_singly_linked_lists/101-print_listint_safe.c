#include "lists.h"
#include <stdlib.h>

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: Pointer to the first node of the listint_t linked list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current_node = head, *loop_node = NULL;
size_t count = 0;

while (current_node != NULL)
{
printf("[%p] %d\n", (void *)current_node, current_node->n);
count++;
current_node = current_node->next;

if (current_node >= loop_node)
{
if (loop_node == NULL)
{
loop_node = current_node;
}
else
{
printf("-> [%p] %d\n", (void *)current_node, current_node->n);
break;
}
}
}

return (count);
}

