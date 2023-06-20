#include <stdio.h>

void print_alphabet();

int main() {
    print_alphabet();
    return 0;
}

void print_alphabet() {
    char i;
    for (i = 'a'; i <= 'z'; i++) {
        putchar(i);
    }
    putchar('\n'); // Add a newline after printing the alphabet
}
