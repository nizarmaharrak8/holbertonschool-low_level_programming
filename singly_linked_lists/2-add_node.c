#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	/* Allocate memory for new node */
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

	/* Calculate string length manually */
	while (str[len] != '\0')
		len++;

	new->len = len;

	/* Insert node at the beginning */
	new->next = *head;
	*head = new;

	return (new);
}

