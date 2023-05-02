#include "lists.h"

/**
 *sum_listint - Calculates the sum of all elements in a listint_t
 *@head: A pointer to the head node of the linked list
 *
 *Return: The sum of all elements in the linked list
 */
int sum_listint(listint_t *head)
{
int sum = 0;

for (; head != NULL; head = head->next)
sum += head->n;
return (sum);
}
