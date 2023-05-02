/**
 *free_listint2 - Frees a list.
 *@head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
if (head == NULL)
return;
while (*head != NULL)
{
listint_t *temp = *head;
*head = (*head)->next;
free(temp);
}
}
