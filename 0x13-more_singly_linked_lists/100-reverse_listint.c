#include "lists.h"

/**
* reverse_listint - Reverses a listint_t linked list.
* @head: Pointer to a pointer to the first node of the listint_t linked list.
*
* Return: Pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous_node = NULL, *current_node = *head, *next_node;

while (current_node != NULL)
{
next_node = current_node->next;
current_node->next = previous_node;
previous_node = current_node;
current_node = next_node;
}

*head = previous_node;

return (*head);
}

