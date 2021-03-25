#include "lists.h"

/**
 *add_node_end - locate a new node at the end of a node
 *
 *@str: string to be added
 *@head: whath get the first pointer
 *Return:amount of elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *tmp;

tmp = *head;

if (!head || !str)
{
return (NULL);
}

new_node = malloc(sizeof(list_t));

if (!new_node)
{
return (NULL);
}
new_node->str = strdup(str);

if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->len = len2(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new_node;
return (new_node);
}
/**
 * len2 - Calculates the length of a string.
 * @str: Constant string
 * Return: The length of the string
 */
int len2(const char *str)
{
int i;
if (str == NULL)
return (0);
for (i = 0; str[i] != '\0'; i++)
;
return (i);
}
