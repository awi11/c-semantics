#include <stdio.h>

int main() {
  int x = 0x41424344;

  char * charPtr = (char *)&x;
  int i;
  for(i = 0; i < sizeof(x); i++) {
    printf("%c", charPtr[i]);
  }
  printf("\nThe size of the charPtr is: %zu\n", sizeof(charPtr)); 
  return 0;
}
