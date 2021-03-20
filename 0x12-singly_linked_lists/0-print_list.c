#include "lists.h"
/**
 * print_list - point print all nodes from a lists
 * @h: pointer to the struct
 * Return: lists lenght
 *
 */
size_t print_list(const list_t *h)
{
int i = 1;

while (h->next != NULL)
{
if (h->str == NULL)

printf("[0] (nil)\n");

else

printf("[%u] %s\n", h->len, h->str);

h = h->next;
i++;

}

printf("[%u] %s\n", h->len, h->str);

if (h == NULL)
return (0);

return (i);
}
