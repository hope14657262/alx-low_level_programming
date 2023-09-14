#include "main.h"
/**
 * _isalpha - check if char is isalpha
 * @c: is the char to be checked
 * Return: 1 if char is isalpha, otherwise 0.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
