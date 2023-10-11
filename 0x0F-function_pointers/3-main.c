#include "function_pointers.h"
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - print the result of simple oprations.
 * @argc: ........
 * @argv: .......
 * Return: something 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int numl, num2;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
numl = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(numl, num2));
return (0);
}
