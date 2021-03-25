#include "lists.h"
/**
 *list_len - Calculates the lenght of a linked list
 *@h: pointer to the head of the linked list
 *Return: The total number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
unsigned int i = 1;
if (h == NULL)
{
return (0);
}
while (h->next != NULL)
{
h = h->next;
i++;
}
return (i);
}
