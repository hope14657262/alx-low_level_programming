#include "main.h"
#include <stdio.h>
/**
 * flip_bits - need to flip to get from one number to another.
 * @n: unsigned long int n
 * @m: unsigned long int m
 * Return: nothing
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, i = 0;
unsigned long int j;
unsigned long int ab = n ^ m;
for (k = 63; k >= 0; k--)
{
j = ab >> k;
if (j & 1)
i++;
}
return (i);
}
