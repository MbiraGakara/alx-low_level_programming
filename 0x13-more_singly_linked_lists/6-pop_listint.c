#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: data (n) head node that was deleted, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
int data = 0;
listint_t *temp;

if (*head == NULL)
return (0);

temp = *head;
data = temp->n;
*head = temp->next;
free(temp);

return (data);
}

