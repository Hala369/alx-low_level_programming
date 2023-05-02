#include "lists.h"
/**
* get_nodeint_at_index - returns the node at a certain index in a linked
* @head: first node in the linked list
* @index: The index of the node to look for
*
* Return: The node, NULL if the node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int f = 0;

	while (f != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		f++;
	}
	return (head);
}
