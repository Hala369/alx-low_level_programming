#include "lists.h"
/**
* free_listint2 - a function that frees a linked list
* @head: pointer to the start node
* Return: 0
*/
void free_listint2(listint_t **head)
{
	listint_t *k, *a;

	if (head == NULL)
		return;
	a = *head;
	while (a != NULL)
	{
		k = a;
		a = a->next;
		free(k);
	}
	*head = NULL;
}
