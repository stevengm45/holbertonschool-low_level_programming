#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - deletes the head of a linked list
 * @head: pointer to the head of the list
 * Return: returns the head nodes data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *aux2;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	aux2 = *head;

	{
		*head = (*head)->next;
		n = aux2->n;
		free(aux2);
	}
	return (n);
}
