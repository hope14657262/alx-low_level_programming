#include "main.h"
#include <stdio.h>
/**
 * print_binary -  prints the binary representation of a number.
 * @n: not allowed to use arrays
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
int i, j = 0;
unsigned long int new;
for (i = 63; i >= 0; i--)
{
new = n >> i;
if (new & 1)
{
_putchar('1');
j++;
}
else if (new)
_putchar('0');
}
if (!new)
_putchar('0');
}
