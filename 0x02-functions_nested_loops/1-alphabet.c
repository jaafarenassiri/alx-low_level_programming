#include <stdio.h>

void print_alphabet() {
    char i;
    for (i = 'a'; i <= 'z'; i++) {
        putchar(i);
    }
    putchar('\n'); // Add a newline after printing the alphabet
}
