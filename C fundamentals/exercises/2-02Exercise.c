#include <stdio.h>

#define tax 0.05f

int main(void){

  float amount, Amount_With_Taxes;
  printf("Please, enter your amount to calculate your taxes: ");
  scanf("%f", &amount);
  Amount_With_Taxes = amount+(tax*amount);
  printf("\nThe amount with the taxes is: %f", Amount_With_Taxes);
  return 0;
}
