#include <stdio.h>

int main(void) {

  int balance = 0, credit = 0, debit = 0, command;

  for (;;) {
    printf("\nCommands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit");
    printf("\nPlease enter the command: ");
    scanf("%d", &command);
    switch (command) {
    case 1:
      printf("Enter amount of credit: ");
      scanf("%d", &credit);
      balance += credit;
      break;
    case 2:
      printf("Enter amount of debit: ");
      scanf("%d", &debit);
      balance -= debit;
      break;
    case 3:
      printf("Your current balance is: %d\n", balance);
      break;
    case 4:
      printf("Closing the program...");
      return 0;

    case 0:
      printf("Cleaning the balance...\n");
      balance = 0;
      break;
    }
  }
}
