#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - given as a parameter on each element of an array.
 * @array: ........
 * @size: ...............
 * @action: pointer to print in regular or hex
 * Return: something
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
