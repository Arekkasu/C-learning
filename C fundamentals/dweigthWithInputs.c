#include <stdio.h>

int main(void) {
  int weight, volume, height, width, length;

  printf("Enter the height of the box: ");
  scanf("%d", &height);
  printf("Enter the length of box: ");
  scanf("%d", &length);
  printf("Enter the width of box: ");
  scanf("%d", &width);
  printf("Dimensions: %dx%dx%d\n", height, length, width);

  volume = height * length * width;
  printf("Volume (medidas cubicas): %d\n", volume);

  weight = (volume + 165) / 166;
  printf("Dimensional Weight (pounds): %d\n", weight);
  return 0;
}
