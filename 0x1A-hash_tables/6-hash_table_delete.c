#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp_node, *next_node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp_node = ht->array[i];
		while (temp_node != NULL)
		{
			next_node = temp_node->next;
			free(temp_node->key);
			free(temp_node->value);
			free(temp_node);
			temp_node = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
