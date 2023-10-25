#include "lists.h"

/**
 * get_nodeint_at_index -  deletes the head node of a listint_t
 * @head: the head pointer
 * @index: node desired position to retrieve
 * Return: integer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;
for (a = 0; a < index; a++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
