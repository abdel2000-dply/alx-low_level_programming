#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to the head of the linked list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *current;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	current = *head;
	while (current->next)
		current = current->next;

	current->next = newNode;

	return (newNode);
}
