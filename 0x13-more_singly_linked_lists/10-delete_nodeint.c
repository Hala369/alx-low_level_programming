#include "lists.h"
/**
* delete_nodeint_at_index - deletes a node in a linked list at a certain index
* @head: pointer to the first element in the list
* @index: The location in the list of the node to delete
* Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c;
	listint_t *p;
	unsigned int o;

	if (head == NULL)
		return (-1);
	o = 0;
	c = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = c->next;
		free(c);
		return (1);
	}
	while (o != index)
	{
		p = c;
		c = c->next;
		if (c == NULL)
			return (-1);
		o++;
	}
	p->next = c->next;
	free(c);
	return (1);
}
