#include <stdio.h>
/**
 * main - this is the function of task 7
 * Return: always 0
 */
int main(void)
{
int n, m;
for (n = 48; n <= 56; n++)
{
for (m = 49; m <= 57; m++)
{
if (m > n)
{
putchar(n);
putchar(m);
if (n != 58 || m != 57)
{
putchar('.');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
