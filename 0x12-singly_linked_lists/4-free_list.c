#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *nd;

	while (head != NULL)
	{
		nd = head;
		head = head->next;
		free(nd->str);
		free(nd);
	}
}
