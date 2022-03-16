#include "main.h"

/**
 * print_sign - a function that checks for a number sign
 * @c: single number input
 * Return: 1 if int n is positive or -1 if n is negative or 0 if n equal 0
 */
int print_sign(int n)
{
if (n > 0)
_putchar('+');
return (1);
else if (n == 0)
_putchar('0');
return (0);
else
_putchar('-');
return (-1);
}
