#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: parameter c
 * @s: parameter s
 * Return: s
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);
return (NULL);
}
