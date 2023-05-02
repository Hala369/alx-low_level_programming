#include "lists.h"
/**
 * free_listint - rees a linked list.
 * @head: pointer to list
*/
void free_listint(listint_t *head)
{
	listint_t *u;

	while (head != NULL)
	{
		u = head;
		head = head->next;
		free(u);
	}
}
