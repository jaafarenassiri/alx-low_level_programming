#include "main.h"

/**
*print_alphabet-print all alphabet in lowercase
*
*Return : nothing
*/
void print_alphabet(void) {
    char i;
    
    for (i = 'a'; i <= 'z'; i++) 
    {
        _putchar(i);
    }
    _putchar('\n'); // Add a newline after printing the alphabet
}
