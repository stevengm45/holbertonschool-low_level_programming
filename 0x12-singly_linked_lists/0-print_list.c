#include "lists.h"
/**
 * print_list - point print all nodes from a lists
 * @h: pointer to the struct
 * Return: lists lenght
 *
 */


size_t print_list(const list_t *h)
{
unsigned int i;

while (!h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
i++;
h = h->next;
}
return (i);
}
