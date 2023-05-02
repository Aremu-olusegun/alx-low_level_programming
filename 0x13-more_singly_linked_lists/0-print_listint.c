#include "lists.h"

/**
 *print_listint - prints all the elements of a linked list
 *@h: linked list of type listint_t to print
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num_int = 0;

while (h)
{
printf("%d\n", h->n);
num_int++;
h = h->next;
}

return (num_int);
}
