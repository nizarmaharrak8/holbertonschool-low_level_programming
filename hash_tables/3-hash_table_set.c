#include "hash_tables.h"
#include <string.h>

/**
 * update_node_value - Updates value of an existing node
 * @node: The node to update
 * @value: The new value
 *
 * Return: 1 on success, 0 on failure
 */
int update_node_value(hash_node_t *node, const char *value)
{
	char *value_copy;

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	free(node->value);
	node->value = value_copy;

	return (1);
}

/**
 * create_node - Creates a new hash node
 * @key: The key
 * @value: The value
 *
 * Return: Pointer to node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;
	char *key_copy, *value_copy;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		free(node);
		return (NULL);
	}

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(key_copy);
		free(node);
		return (NULL);
	}

	node->key = key_copy;
	node->value = value_copy;
	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - Adds or*

