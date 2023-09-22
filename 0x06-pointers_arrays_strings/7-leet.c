#include "main.h"
/**
 * leet - encodes a string into 1337
 * @n: encodes a string
 * Return: alyaws 0
 */
char *leet(char *n)
{
int i, j;
char s1[] = "aAeEoOtT";
char s2[] = "4433007711";
for (i = 0; n[i] != '\n'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
}
}
}
return (0);
}
