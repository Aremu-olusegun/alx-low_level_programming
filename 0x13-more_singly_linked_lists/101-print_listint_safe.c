#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list
*
* @head: listint_t head
*
* Return: size_t
*/


size_t print_listint_safe(const listint_t *head)
{
	size_t count1 = 0, count2;
	const listint_t *temp = head;
	const listint_t *next_node;

	do {
		printf("[%p] %d\n", (void *)temp, temp->n);

		count1++;

		temp = temp->next;
		next_node = head;

		count2 = 0;

		do {
			if (temp == next_node)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count1);
			}

			next_node = next_node->next;
			count2++;
		} while (count2 < count1);

	} while (temp != NULL);

	return (count1);
}
