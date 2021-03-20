#include "lists.h"
/**
 * print_list - point print all nodes from a lists
 * @h: pointer to the struct
 * Return: lists lenght
 *
 */


int size_t print_list(const list_t *h)
{
int i;
for (i = 0; !h; i++)
{
if (!h->str)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
}
return (i);
}
