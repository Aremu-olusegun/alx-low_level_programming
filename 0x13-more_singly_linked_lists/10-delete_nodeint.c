#include "lists.h"

/**
  *remove_node_from_list_at_index - remove node from list at index
  *@head: pointer to head of list
  *@index: index of node to remove
  *Return: 1 on success, -1 on failure
  */
int remove_node_from_list_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current, *next;

if (!head || !*head)
return (-1);

current = *head;

if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}

for (i = 0; i < (index - 1); i++)
{
current = current->next;
if (current == NULL)
return (-1);
}

next = current->next;
current->next = next->next;
free(next);
return (1);
}
