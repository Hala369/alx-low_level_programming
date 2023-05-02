#include "lists.h"
/**
* sum_listint -  calculates the sum of all the data in a listint_t list
* @head: irst node in the linked list
* Return: If the list is empty - 0, else return the sum of all data
*/
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
