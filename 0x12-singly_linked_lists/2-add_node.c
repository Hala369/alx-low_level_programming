#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - adds a new node at the beginning of a list_t
* @head: double pointer to the list_t
* @str: new string to add in the node
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *w;
	unsigned int len = 0;

	while (str[len])
		len++;

	w = malloc(sizeof(list_t));
	if (!w)
		return (NULL);

	w->str = strdup(str);
	w->len = len;
	w->next = (*head);
	(*head) = w;

	return (*head);
}
