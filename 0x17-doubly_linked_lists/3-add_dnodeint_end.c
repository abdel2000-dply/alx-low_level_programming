#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: the head of the list
 * @n: ...
 * Return: ...
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *t;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL) {
		new->prev = NULL;
		*head = new;
		return (new);
	}

	t = *head;
	while (t->next != NULL)
		t = t->next;

	t->next = new;
	new->prev = t;

	return (new);
}
