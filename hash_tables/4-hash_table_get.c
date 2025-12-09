#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key to look for
 *
 * Return: the value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *node;

    /* validate input */
    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    /* get index for the key */
    index = key_index((const unsigned char *)key, ht->size);

    /* get the first node in the list at this index */
    node = ht->array[index];

    /* search for the key in the list */
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);

        node = node->next;
    }

    /* key not found */
    return (NULL);
}

