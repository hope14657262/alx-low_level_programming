#include "main.h"
#include <stdio.h>
/**
 * main - this is the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argv - 1);
return (0);
}
