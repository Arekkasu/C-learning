#include <stdio.h>


int main(void){

  int x, polynomial;

  printf("Please enter de value of x: ");
  scanf("%d", &x);
  polynomial = 3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+7*(x)-6;
  printf("The value is: %d", polynomial);

}
