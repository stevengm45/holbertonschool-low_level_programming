#include "lists.h"
/**
 *listint_len - Calculate the length of a list
 *@h: Pointer to the head of list
 *Return: Quantity of nodes
 */

size_t listint_len(const listint_t *h)
{
unsigned int i = 0;

if (h == NULL)
return (0);
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
