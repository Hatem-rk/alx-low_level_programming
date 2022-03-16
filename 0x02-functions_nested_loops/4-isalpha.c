#include "main.h"

/**
 * _islalpha - a function that checks for lowercase or uppercase or numeric
 * character
 * @c: single letter or number input
 * Return: 1 if int c is lowercase or uppercase or number, 0 if otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 0 && c <= 9))
return (1);
else
return (0);
}
