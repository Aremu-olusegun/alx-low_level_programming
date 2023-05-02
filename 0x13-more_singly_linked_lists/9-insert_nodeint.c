#include "lists.h"

/**
 *insert_nodeint_at_index - Insert a new node at a given positiion.
 *@head: First node address.
 *@idx: Position n
 *@n: Data of the new node.
 *Return: the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i;

if (*head == NULL && idx != 0)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

temp = *head;
i = 0;

do {
if (temp == NULL)
{
free(new_node);
return (NULL);
}

if (i == idx - 1)
{
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}

temp = temp->next;
i++;
} while (1);
}
