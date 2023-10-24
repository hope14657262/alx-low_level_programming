#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the head pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t output;
if (h == NULL)
return (0);
for (output = 0; h != NULL; output++)
{
printf("%d\n", h->n);
h = h->next;
}
return (output);
}
