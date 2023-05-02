#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at index
 * @head: head of the list
 * @index: location of the node to delete
 *
 * Return: pointer to head of list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL || index < 1)
		return (-1);

	listint_t *temp = *head;
	if (index == 1)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	int i = 1;
	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	listint_t *next_node = temp->next->next;
	free(temp->next);
	temp->next = next_node;
	return (1);
}
