#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - a new node at the beginning of a list_t list.
 * @str: needs to be duplicated
 * @head: the original linked
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
int length = 0;
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);
while (str[length])
length++;
temp->len = length;
temp->str = strdup(str);
temp->next = *head;
return (temp);
}
