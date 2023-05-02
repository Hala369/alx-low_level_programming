#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given psiton.
* @head: pointer to the first node in the list
* @idx: the index of the list where the new node should be added.
* @n: data to insert in the new node.
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *q, *f = *head;
	unsigned int b;

	q = malloc(sizeof(listint_t));
	if (q == NULL)
		return (NULL);

	q->n = n;

	if (idx == 0)
	{
		q->next = f;
		*head = q;
		return (q);
	}

	for (b = 0; b < (idx - 1); b++)
	{
		if (f == NULL || f->next == NULL)
			return (NULL);

		f = f->next;
	}

	q->next = f->next;
	f->next = q;

	return (q);
}
