#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: a pointer to a pointer to the head of a list.
 * @idx: index of the list where the node should be added.
 * @n: the data of the added node.
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev = NULL, *curr = *head;
	unsigned int i;

	/*I think we can use the head directly but
	* its gonna be complicated
	*/
	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	for(i = 0; curr && i < idx; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (i < idx)
	{
		free(new);
		return (NULL);
	}

	new->next = curr;
	prev->next = new;

	return (new);
}
