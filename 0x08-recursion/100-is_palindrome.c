#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  the natural is_prime_number.
 * @s: natural cheked n
 * Return: the natural number of cheked
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator -  the natural is_prime_number.
 * @s: string
 * @n1: iteration 1
 * @n2: itration 2
 * Return:  value of integer
 */
int comparator(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + comparator(s, n1 + 1, n2 - 1));
}
return (0);
}
/**
 * is_palindrome -  the natural is_palindrome.
 * @s: string
 * Return:  the natural number of is_palindrome 1 or 0
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (comparator(s, 0, _strlen_recursion(s) - 1));
}
