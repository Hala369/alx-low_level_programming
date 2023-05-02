#include "lists.h"
/**
*add_nodeint - adds a new node at the beginning of a linked list.
*@head: pointer to the first node in the list
*@n: node to add
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *m;

	m = *head;
	m = malloc(sizeof(listint_t));
	if (m == NULL)
		return (NULL);
	m->n = n;
	m->next = *head;
	*head = m;
	return (*head);
}
