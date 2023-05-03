#include "lists.h"

/**
  * print_listint_safe - Prints a linked list, safely.
  *
  * @head: A pointer to the first node in the list.
  *
  * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t num_nodes = 0;
long int difference;

while (head)
{
difference = head - head->next;
num_nodes++;
printf("[%p] %d\n", (void *)head, head->n);
if (difference > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}

return (num_nodes);
}
