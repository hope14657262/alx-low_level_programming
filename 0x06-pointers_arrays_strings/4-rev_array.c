#include "main.h"
/**
 * reverse_array - reverses content array of integers.
 * @a: array of reverse task
 * @n: number of array elements
 * Return: viod
 */
void reverse_array(int *a, int n)
{
int i = 0, temp;
n = n - 1;
for (i = 0; i < n; i++)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
n--;
}
}
