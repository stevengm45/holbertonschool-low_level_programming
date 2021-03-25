#include "lists.h"
/**
 * free_list - free allocated memory
 *@head: pointer to the firstnode
 */

void free_list(list_t *head)
{
list_t *tmp;
if (head == NULL)
return;
while (!head->next)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);

}
}
