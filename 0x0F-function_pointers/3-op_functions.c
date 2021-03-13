#include "3-calc.h"
/**
 * op_add - Operation of addition.
 * @a: Num 1
 * @b: Num 2
 * Return: Addition of ops.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Operation of substraction.
 * @a: Num 1
 * @b: Num 2
 * Return: Substraction of ops.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Operation of multiplication.
 * @a: Num 1
 * @b: Num 2
 * Return: Multiplication of ops.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Operation of division.
 * @a: Num 1
 * @b: Num 2
 * Return: Division of ops.
 */
int op_div(int a, int b)
{
if (b)
{
return (a / b);
}
printf("Error\n");
exit(100);
}
/**
 * op_mod - Operation of module.
 * @a: Num 1
 * @b: Num 2
 * Return: Module of ops.
 */
int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
printf("Error\n");
exit(100);
}
