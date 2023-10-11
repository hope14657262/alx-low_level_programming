#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @f: pointer to check
 * @name: pointer to add
 * Return: something
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
