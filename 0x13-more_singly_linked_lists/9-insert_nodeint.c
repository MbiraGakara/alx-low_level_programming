#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position in a
*                            listint_t linked list.
* @head: A pointer to the head of the listint_t linked list.
* @idx: The index of the list where the new node should be added. Index starts
*       at 0.
* @n: The integer value to store in the new node.
*
* Return: If the function fails - NULL.
*         Otherwise - the address of the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp = *head;
unsigned int i = 0;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

while (i < (idx - 1))
{
if (temp == NULL)
{
free(new);
return (NULL);
}

temp = temp->next;
i++;
}

new->next = temp->next;
temp->next = new;

return (new);
}

