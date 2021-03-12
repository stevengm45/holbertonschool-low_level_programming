#include "variadic_functions.h"
/**
 * _printchar - print all the char args
 * @args: args passed to the function
 * Return: void function
 */
void _printchar(va_list args)
{
printf("%c", va_arg(args, int));
}
/**
 * _printint - print all the int args
 * @args: args passed to the function
 * Return: void function
 */
void _printint(va_list args)
{
printf("%d", va_arg(args, int));
}
/**
 * _printfloat - print all the float args
 * @args: args passed to the function
 * Return: void function
 */
void _printfloat(va_list args)
{
printf("%f", va_arg(args, double));
}
/**
 * _printstring - print all the string args
 * @args: args passed to the function
 * Return: void function
 */
void _printstring(va_list args)
{
char *s;
s = va_arg(args, char*);
if (s == NULL)
s = "(nil)";
printf("%s", s);
}
/**
 * print_all - print all the arguments according with the format
 * @format: format to print
 * Return: void function
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i, j;
char *s = "";
m list[] = {
{"c", _printchar},
{"i", _printint},
{"f", _printfloat},
{"s", _printstring},
{NULL, NULL},
};
va_start(args, format);
i = 0;
while (format && format[i])
{
j = 0;
while (list[j].n != NULL)
{
if (format[i] == list[j].n[0])
{
printf("%s", s);
list[j].f(args);
s = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}
