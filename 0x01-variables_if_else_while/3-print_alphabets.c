#include <stdio.h>
/**
  *upper and lower
  *c
  *return always 0 
  *
  */
int main(void){
char lowercase, uppercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
putchar('%c ', lowercase);
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
putchar("%c ", uppercase);
putchar("\n");
return 0;
}
