#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp_node;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp_node = ht->array[i];
		while (temp_node != NULL)
		{
			if (first_pair)
			{
				printf("'%s': '%s'", temp_node->key, temp_node->value);
				first_pair = 0;
			}
			else
			{
				printf(", '%s': '%s'", temp_node->key, temp_node->value);
			}
			temp_node = temp_node->next;
		}
	}
	printf("}\n");
}
