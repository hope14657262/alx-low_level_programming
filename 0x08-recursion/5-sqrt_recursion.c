#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion -  the natural square root of a number.
 * @n: natural square n
 * Return:  the natural of sqrt
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt -  the natural square root of a number.
 * @n: natural square n
 * @i: iteration
 * Return:  the natural of sqrt
 */
int _sqrt(int n)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (1);
i return (_sqrt(n, i + 1));
}
