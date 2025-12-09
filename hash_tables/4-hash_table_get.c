#include "hash_tables_h"
#include <string>

 
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
   hash_node_t *node;
	char *n;
if (ht == NULL || key == NULL || )
                return (NULL);

	

        index = key_index((const unsigned char *)key, ht->size);
 	node = ht->array[index];

if (node == NULL)
	return(NULL)

n = node->value 
return(n)




}
