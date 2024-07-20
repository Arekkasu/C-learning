#include <stdio.h>
#define pi 3.1416

int main(void) {

  int r;
  printf("Please enter the radius of the sphere: ");
  scanf("%d", &r);
  float volume = ((4.0f / 3.0f) * pi) * (r * r * r);
  printf("\n calculating...\n");
  printf("The volume of the sphere is: %f", volume);
  return 0;
}
