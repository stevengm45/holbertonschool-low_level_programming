#include "lists.h"
/**
 *print_listint - Printe all elements of a list
 *@h: Pointer to list
 *Return: Number of nodes in the list
 */


size_t print_listint(const listint_t *h)
{
size_t i = 0;
if (h == NULL)
return (0);
while (h)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
