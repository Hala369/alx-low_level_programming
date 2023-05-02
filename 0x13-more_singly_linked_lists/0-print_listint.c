#include "lists.h"
/**
* print_listint - prints all the elements of a linked list.
* @h: linked list of type listint_t to print
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t y;

	for (y = 0; h; y++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (y);
}
