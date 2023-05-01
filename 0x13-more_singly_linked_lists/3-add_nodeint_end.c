#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: pointer to a pointer to the head of a list
 * @n: the integer o store in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;

	while (current->next)
		current = current->next;

	current->next = new;

	return (new);
}
