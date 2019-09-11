/**
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

  double a, b;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) Power\n");
  printf("(7) log_a(b)\n");
  scanf("%d", &choice);

  //TODO: process the results here
  double answer;
  if (choice == 1) {
    answer = a + b;
    printf("%f\n", answer);
  } else if (choice == 2) {
      answer = a - b;
    printf("%f\n", answer);
  } else if (choice == 3) {
      answer = a * b;
      printf("%f\n", answer);
  } else if (choice == 4 && b != 0) {
      answer = a / b;
      printf("%f\n", answer);
  }  else if (choice == 5) {
      if (a < b) {
          printf("%f\n", a);
      } else if (b < a) {
          printf("%f\n", b);
      }
  } else if (choice == 6) {
      answer = pow(a, b);
      printf("%f\n", answer);
  } else if (choice == 7 && a >= 0 && b >= 0) {
      answer = log(b) / log(a);
      printf("%f\n", answer);
  } else {
      printf("Error: Invalid Input\n");
    return 0;
  }

  return 0;
}
