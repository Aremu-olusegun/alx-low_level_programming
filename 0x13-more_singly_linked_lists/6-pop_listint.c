#include "lists.h"

/**
 *pop_listint - Removes the first element of a listint_t list.
 *@head: Double pointer to the head of the listint_t list.
 *
 *Return: The head node's data (n).
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
n = temp->n;
*head = (*head)->next;
free(temp);

return (n);
}
