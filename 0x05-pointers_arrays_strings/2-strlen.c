#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 * @str:the length of a string 
 * Return: The length of @str
 */
int _strlen(const char *str)
/* function that returns the length of a string. */
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
