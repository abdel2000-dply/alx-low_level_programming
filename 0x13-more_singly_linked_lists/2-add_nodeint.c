#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: A pointer to a pointer to head of the list.
 * @n: integer to store in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
