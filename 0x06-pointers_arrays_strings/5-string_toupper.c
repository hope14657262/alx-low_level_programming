#include "main.h"
/**
 * string_toupper - reverses the content of an array of integers.
 * @n: pointer of task
 * Return: alyaws n
 */
char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
i++;
}
return (n);
}
