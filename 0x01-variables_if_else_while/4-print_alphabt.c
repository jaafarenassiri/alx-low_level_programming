#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char alphabt = 'a';

while (alphabet <= 'z')
{
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);
}
alphabet++;
}

putchar('\n');

return (0);
}
