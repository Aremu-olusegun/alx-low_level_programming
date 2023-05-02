#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to the head of the list
 * @str: String to be added
 *
 * Return: Returns the address to the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
        char *string_copy;
        int string_length;
        list_t *new_element;

        new_element = malloc(sizeof(list_t));
        if (new_element == NULL)
                return (NULL);

        string_copy = strdup(str);
        if (string_copy == NULL)
        {
                free(new_element);
                return (NULL);
        }

        for (string_length = 0; str[string_length];)
                string_length++;

        new_element->str = string_copy;
        new_element->len = string_length;
        new_element->next = *head;

        *head = new_element;

        return (new_element);
}
