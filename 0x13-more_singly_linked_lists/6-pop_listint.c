#include "lists.h"
/**
* pop_listint - deletes the head node of a linked list
* @head: pointer to the first element in the linked list
* Return: the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	int j;
	listint_t *h, *g;

	if (head == NULL)
	{
		return (0);
	}
	g = h = *head;
	if (*head)
	{
		j = h->n;
		*head = h->next;
		free(g);
	}
	else
		j = 0;
	return (j);
}
