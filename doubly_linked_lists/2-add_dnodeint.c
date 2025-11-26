#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer to head pointer
 * @n: integer to add
 *
 * Return: address of new node, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}

