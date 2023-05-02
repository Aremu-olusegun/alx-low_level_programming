#include "lists.h"

/**
  *remove_list_element - removes the node at given index
  *@head: pointer to the head of the linked list
  *@index: the index of the node to be deleted
  *Return: 1 on success, -1 on failure
  */
int remove_list_element(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current_node, *next_node;

if (!head || !*head)
return (-1);

current_node = *head;

if (index == 0)
{
*head = (*head)->next;
free(current_node);
return (1);
}

for (i = 0; i < (index - 1); i++)
{
current_node = current_node->next;
if (current_node == NULL)
return (-1);
}

next_node = current_node->next;
current_node->next = next_node->next;
free(next_node);
return (1);
}
