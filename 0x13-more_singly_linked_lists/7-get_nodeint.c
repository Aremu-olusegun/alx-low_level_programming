#include "lists.h"

/**
 *get_nodeint_at_index - Returns a node in a list.
 *@head: Pointer to the head node.
 *@index: The position of the node starting from 0.
 *Return: Pointer to the node or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *node;

for (i = 0, node = head; node != NULL && i < index; i++, node = node->next)
continue;

return (i == index ? node : NULL);
}
