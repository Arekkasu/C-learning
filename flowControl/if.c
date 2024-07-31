#include <stdio.h>

int main() {

  float value, comission;
  printf("Enter the value of trade: ");
  scanf("%f", &value);
  // printf("%0.2f", value);

  if (value < 2500) {
    comission = 30.00f + (.017f * value);
  } else if (value < 6250) {
    comission = 56.00f + (.0066f * value);
  } else if (value < 20000) {

    comission = 76.00f + (.0034f * value);
  } else if (value < 50000) {
    comission = 100.00f + (.0022f * value);
  } else {
    comission = 255.00f + (.0009f * value);
  }

  if (comission < 39.00f) {
    comission = 39.00f;
  }
  printf("\nComission: %0.2f", comission);
  return 0;
}
