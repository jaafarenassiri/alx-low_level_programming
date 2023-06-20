#include <stdio.h>
#include "main.h"
/**
*print_alphabet-print all alphabet in lowercase
*/
void print_alphabet(void) {
    char i;
    
    for (i = 'a'; i <= 'z'; i++) 
    {
        putchar(i);
    }
    putchar('\n'); // Add a newline after printing the alphabet
}
