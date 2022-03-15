#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10 (void)
{
int i=0;
char alpha="a";
while (i<10)
{
while (alpha<="z")
{
_putchar(alpha);
alpha++;
}
i++;
}
_putchar('\n');
}
