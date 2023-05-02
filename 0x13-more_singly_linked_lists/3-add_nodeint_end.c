#include "lists.h"
/**
*add_nodeint - adds a new node at the beginning of a linked list.
*@head: pointer to the first node in the list
*@n: node to add
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *w, *z;

	w = *head;
	w = malloc(sizeof(listint_t));
	if (w == NULL)
		return (NULL);
	w->n = n;
	w->next = NULL;
	if (*head == NULL)
	{
		*head = w;
		return (*head);
	}
	z = *head;
	while (z->next != NULL)
		z = z->next;
	z->next = w;
	return (*head);
}
