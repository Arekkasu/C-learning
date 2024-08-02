#include <stdio.h>

int main(void) {

  int squares, counter, accumulative;

  printf("Enter number of entries in table: ");
  scanf("%d", &squares);

  counter = 1;

  while (counter <= squares) {
    int squeare = counter * counter;
    printf("\n%d    |   %d", counter, squeare);
    counter++;
  }

  /*
   *******************************
   * THIS IS THE SUM OF PROMPTS  *
   *******************************
   */

  int number, sum = 0;

  printf("\nEnter a number to sum, to finish enter 0: ");
  scanf("%d", &number);
  while(number != 0) {
    sum += number;
    scanf("%d", &number);
  }
  printf("The sum is: %d", sum);
  return 0;
}
