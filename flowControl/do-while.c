#include <stdio.h>
int main(void) {
  int digits = 0, n;
  printf("Enter a nonnegative integer: ");
  scanf("%d", &n);
  do {
    //divison entera
    n /= 10;
    digits++;
  } while (n > 0);
  printf("The number has %d digit(s).\n", digits);
  return 0;
}
