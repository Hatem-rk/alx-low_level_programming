#include "main.h"

/**
 * prints 10 times the alphabet, in lowercase, followed by a new line.
*/

void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char alpha;
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
i++;
}
}