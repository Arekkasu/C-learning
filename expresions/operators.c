#include <stdio.h>

int main(void) {

  /*first sum*/
  int first_digit, third_digit, fifth_digit, seventh_digit, ninth_digit,
      eleventh_digit,
      /*Second Sum*/
      second_digit, fourth_digit, sixth_digit, eighth_digit, tenth_digit,
        /*Formulas*/
      firstSum,secondSum,total,checkDigit;

  printf("Please enter the first single digit: ");
  scanf("%1d", &first_digit);
  printf("\nPlease Enter the first group digit: ");
  scanf("%1d%1d%1d%1d%1d", &second_digit, &third_digit, &fourth_digit,
        &fifth_digit, &sixth_digit);
  
  firstSum = first_digit + third_digit + fifth_digit + seventh_digit +
                 ninth_digit + eleventh_digit;
  printf("\nPlease Enter the second group digit: ");
  scanf("%1d%1d%1d%1d%1d", &seventh_digit, &eighth_digit, &ninth_digit,
        &tenth_digit, &eleventh_digit);

  secondSum = second_digit+fourth_digit+sixth_digit+eighth_digit+tenth_digit;

  total = (((firstSum*3)+secondSum)-1)/10;

  checkDigit = 9-total;


  printf("Check Digit is: %1d", checkDigit);


}
