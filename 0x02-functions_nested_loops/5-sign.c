#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n : the number to check
 *
 * Return : 1 if n is positive, 0 if n is zero  and -1 if n is negative
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n < 0)
{
return (-1);
_putchar('-');
}
else
{
return (0);
_putchar('0');
}
}
