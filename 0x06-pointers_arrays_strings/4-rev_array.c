#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of reverse task
 * @n: number of array elements 
 * Return: alyaws 0
 */
void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0; i < n--; i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
