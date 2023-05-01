#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
listint_t *current;

for (current = *head; current != NULL; current = *head)
{
*head = current->next;
free(current);
}

*head = NULL;
}

