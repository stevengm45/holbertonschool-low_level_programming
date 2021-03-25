#include "lists.h"
/**
 * add_nodeint - adds a new node tho the beggining of a  linked list
 * @head: pointer to head of rhe list
 *@n: number of elements to add
 * Return: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

if (*head == NULL)
new_node->next = NULL;


new_node->next = *head;
new_node->n = n;
*head = new_node;

return (*head);
}
