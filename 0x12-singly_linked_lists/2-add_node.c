#include "lists.h"
/**
 *add_node - Creates and adds a new node into the list
 *@head: Pointer to the head oh the linst
 *@str: string to assign the node
 *Return: Pointer to the head of the linked list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
if (head == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
if
(*head == NULL)
{
new_node->next = (NULL);
}
new_node->next = *head;
new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->len = len2(str);
*head = new_node;
return (*head);
}
/**
 *len2 - Calculates the string length
 *@str: Constant string
 *Return: Length of given string
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
