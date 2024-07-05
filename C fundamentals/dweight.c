#include <stdio.h>

int main(void) {
  int weight, volume, height, width, length;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Dimensions: %dx%dx%d\n", height, length, width);
  printf("Volume (medidas cubicas): %d\n", volume);
  printf("Dimensional Weight (pounds): %d\n", weight);

  return 0;

}

