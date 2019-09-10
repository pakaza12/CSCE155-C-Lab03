/**
 * Parker Zach, Daniel Godoy
 * Lab 03
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);

  printf("Do you have any children? (Y) or (N)? ");
  getchar(); //remove the endline character
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }

  //TODO: compute the tax, child credit, and total tax:
  if (0 < agi && agi <= 17000) {
    tax = agi * 0.1;
  } else if (17000 < agi && agi <= 69000) {
    tax = 1700 + (agi - 17000) * 0.15;
  } else if (69000 < agi && agi <= 139350) {
    tax = 9500 + (agi - 69000) * 0.25;
  } else if (139350 < agi && agi <= 212300) {
    tax = 27087.5 + (agi - 139350) * 0.28;
  } else if (212300 < agi && agi <= 379150) {
    tax = 47513.5 + (agi - 212300) * 0.33;
  } else if (agi > 379150) {
    tax = 102574 + (agi - 379150) * 0.35;
  } else {
    printf("Error: Invalid value\n");
    return 0;
  }
  //This calculates the tax rate for all of the brackets

  childCredit = numChildren * 1000;
  totalTax = tax - childCredit;
  //Calculates the child credit then subtracts it to get
  //your total tax

  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}
