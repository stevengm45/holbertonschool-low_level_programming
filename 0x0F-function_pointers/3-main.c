#include "3-calc.h"
/**
 * main - main file
 * @argc: number of lines arguments
 * @argv: array of elements
 * Return: 0
 */

int main(int argc, char *argv[])
{
int a, b, c;
int (*operation)(int, int);
if (argc !=  4 || argv[2][1] != 0)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
operation = get_op_func(argv[2]);
c = operation(a, b);
printf("%d\n", c);
return (0);
}
