#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at index `index` of a listint_t linked list.
* @head: Pointer to a pointer to the first node of the listint_t linked list.
* @index: Index of the node to delete. Index starts at 0.
*
* Return: 1 if the deletion succeeded, -1 if it failed (e.g. if the list is empty or the index is out of bounds).
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node, *previous_node;
unsigned int i;

if (head == NULL || *head == NULL)
{
return (-1);
}

if (index == 0)
{
current_node = *head;
*head = current_node->next;
free(current_node);
return (1);
}

previous_node = *head;
current_node = previous_node->next;
for (i = 1; i < index && current_node != NULL; i++)
{
previous_node = current_node;
current_node = current_node->next;
}

if (current_node == NULL)
{
return (-1);
}

previous_node->next = current_node->next;
free(current_node);

return (1);
}

