#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	unsigned int len = 0;

	/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/* Duplicate the string */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	/* Calculate the length of the string */
	while (str[len] != '\0')
		len++;
	new->len = len;
	new->next = NULL;

	/* If list is empty, new node becomes the head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Otherwise, traverse to the last node */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	/* Append the new node at the end */
	last->next = new;

	return (new);
}

