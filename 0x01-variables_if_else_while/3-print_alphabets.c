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
purchar('%c ', lowercase);
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
purchar("%c ", uppercase);
purchar("\n");
return 0;
}
