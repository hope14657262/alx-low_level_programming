#include "main.h"
/**
 * reverse_array - reverses content array of integers.
 * @a: array of reverse task
 * @n: number of array elements 
 * Return: alyaws 0
 */
void reverse_array(int *a, int n)
{
int i;
int t;
for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
}
