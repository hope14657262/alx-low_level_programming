#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that allocates memory using malloc
 * @ptr: the apointer of memory to print
 * @old_size: print old_size
 * @new_size: print new_size
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
return (nptr);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
{
nptr[i] = ((char *) ptr)[i];
}
free(ptr);
return (nptr);
}
