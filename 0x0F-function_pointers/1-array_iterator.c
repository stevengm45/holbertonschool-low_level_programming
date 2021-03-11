#include "function_pointers.h"
/**
 *array_iterator - execute function
 *@array: array of characters
 *@size: size of array
 *@action: pointer to the function
 *Return: zero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || size == 0 || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
