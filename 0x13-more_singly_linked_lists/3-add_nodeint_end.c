#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: Pointer to the head of the list.
 * @str: String to be added to the list.
 *
 * Return: NULL in case of failure or address or the element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *duplicate_str;
	int string_length;

	if (new_node == NULL)
		return (NULL);

	duplicate_str = strdup(str);

	if (duplicate_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	string_length = strlen(str);
	new_node->str = duplicate_str;
	new_node->len = string_length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		last_node->next = new_node;
	}

	return (*head);
}
