#include "lists.h"

/**
 *reverse_listint - reverses a linked list in place
 *@head: pointer to the first node in the list
 *
 *Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

loop:
if (*head == NULL)
goto end;

next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;

goto loop;

end:
*head = prev;

return (*head);
}
