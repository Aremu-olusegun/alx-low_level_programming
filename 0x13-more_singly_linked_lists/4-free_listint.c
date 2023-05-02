#include "lists.h"

/**
 *free_listint - function that frees a listint_t list
 *@head: input header pointer
 *Return: nothing
 */

void free_listint(listint_t *head)
{
listint_t *current = head, *next_node;

while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}
}
