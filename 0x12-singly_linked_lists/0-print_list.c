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

for (i = 0; !h->next; i++)
{
if (h->str == NULL)
{
printf("[%u] %s\n", h->len, "(nil)");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
}
return (i);
}
