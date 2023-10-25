#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_len list.
 * @h: the head pointer
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t output;
if (h == NULL)
return (0);
for (output = 0; h != NULL; output++)
{
h = h->next;
}
return (output);
}
