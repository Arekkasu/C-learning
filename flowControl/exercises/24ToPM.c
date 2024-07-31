#include <stdio.h>

int main() {

  int hour, minutes;
  printf("Enter a 24-hour time (00:00): ");
  scanf("%d:%d", &hour, &minutes);
  printf("The hour is: ");
  if (hour == 0) {

    printf("12:%.2d AM", minutes);

  } else if (hour < 12) {

    printf("%.2d:%.2d AM", hour, minutes);

  } else if (hour == 12) {

    printf("12:%.2d PM", minutes);

  } else if (hour > 12) {

    printf("%.2d:%.2d PM", hour - 12, minutes);
  }

  return 0;
}
