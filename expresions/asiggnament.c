#include <stdio.h>

int main() {

  int i, c;

  i = 3;
  c = i;

  printf("i: %d, c: %d", i, c);

  c += 1;

  printf("i: %d, c: %d", i, c);
}
