#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: The new line of a string
 * Return: The new line @str
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
