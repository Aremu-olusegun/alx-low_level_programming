#include "lists.h"

/**
* my_free_listint_safe - Frees a listint_t list
*
* @h: listint_t double pointer
*
* Return: size_t
*/

size_t my_free_listint_safe(listint_t **h)
{
	/* Initialize variables */
	size_t count = 0;
	int count2;
	listint_t *head, *new_node;

	/* Check if the list is empty */
	if (*h == NULL)
	{
		return (0);
	}

	/* Assign head to the pointer */
	head = *h;

	/* Traverse the list */
	while (head)
	{
		count++;
		count2 = head->next - head;

		/* Free the current node */
		new_node = head;
		free(new_node);

		/* Check if the nodes are consecutive */
		if (count2 >= 0)
		{
			break;
		}

		/* Move the pointer to the next node */
		head = head->next;
	}

	return (count);
}

