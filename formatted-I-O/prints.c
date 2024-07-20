#include <stdio.h>

int main(void) {

  int digit;
  float decimal;
  // Formatted Output with blank spaces
  digit = 6;
  decimal = 839.21f;

  printf("|%d|%5d|%-5d|%5.3d|\n", digit, digit, digit, digit);
  printf("|%10.3f|%10.3e|%-10g|\n", decimal, decimal, decimal);
   
  printf("\n\n---TEXTO---\n");
  printf("hola\t|adios");
  return 0;
}
