#include "main.h"
/**
 * _isupper - this is the main function
 * @c: char to check
 * Return: always 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
