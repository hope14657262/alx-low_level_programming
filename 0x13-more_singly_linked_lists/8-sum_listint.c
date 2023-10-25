#include "lists.h"

/**
 * sum_listint -  deletes the head node of a listint_t
 * @head: the head pointer
 * Return: integer
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
