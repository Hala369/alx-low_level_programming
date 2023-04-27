#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* *add_node_end - adds a new node at the end of a list_t list
* @head: double pointer to the list_t list
* @str: string to put in the new node
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *f, *r;
	unsigned int d;

	d = 0;
	if (*head == NULL)
	{
		f = malloc(sizeof(list_t));
		if (f == NULL)
			return (NULL);
		f->next = NULL;
		*head = f;
		f->str = strdup(str);
		while (str[d] != '\0')
			d++;
		f->len = d;
	}
	else
	{
		r = *head;
		while (1)
		{
			if (r->next == NULL)
				break;
			r = r->next;
		}
		f = malloc(sizeof(list_t));
		if (f == NULL)
			return (NULL);
		f->next = NULL;
		r->next = f;
		f->str = strdup(str);
		while (str[d] != '\0')
			d++;
		f->len = d;
	}
	return (f);
}
