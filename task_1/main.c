#include "header.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

  char op;
  char tmp;
  double first, second;
  printf("Please select an operation you would like to do:\n"\
         " 1 - addition\n"\
         " 2 - subtraction\n"\
         " 3 - multiplication\n"\
         " 4 - division\n"\
         " 5 - factorial\n"\
         " 6 - square root\n");

  scanf("%c", &op);
  //check if only one character was entered
  scanf("%c", &tmp);
  if (((char) tmp) != '\n'){
	printf("Invalid selection!\n");
	return 0;
  }

// Input and validation 
  switch (op) {
    case '1':
    case '2':
    case '3':
      printf("Enter two operands separated by space: ");
      if (scanf("%lf %lf", &first, &second)<=0){
        printf("Invalid input! Only integers and floating point numbers accepted.\n");
        return(0);
      };
      break;
    case '4':
      printf("Enter two operands separated by space: ");
      if (scanf("%lf %lf", &first, &second)<=0){
        printf("Invalid input! Only integers and floating point numbers accepted.\n");
        return(0);
      };
      if (second == 0) {
        printf("Cannot divide by zero!\n");
        return(0);
      }
      break;
    case '5':
      printf("Enter one operand: ");
      if (scanf("%lf", &first)<=0){
        printf("Invalid input! Only integers and floating point numbers accepted.\n");
        return(0);
      };
      if ((ceil(first) != first)||(first < 0)){
        printf("Cannot produce factorial for negative or floating point number!\n");
        return(0);
      }
      break;
    case '6':
      printf("Enter one operand: ");
      if (scanf("%lf", &first)<=0){
        printf("Invalid input! Only integers and floating point numbers accepted.\n");
        return(0);
      };
      if (first < 0){
        printf("Cannot produce square root of negative number!\n");
        return(0);
      }
      break;
    // invalid selection
    default:
      printf("Error! Wrong selection.");
      return(0);
  }


  switch (op) {
    case '1':
      printf("%.1lf + %.1lf = %.1lf \n", first, second, add(first, second));
      break;
    case '2':
      printf("%.1lf - %.1lf = %.1lf \n", first, second, sub(first, second));
      break;
    case '3':
      printf("%.1lf * %.1lf = %.1lf \n", first, second, mul(first, second));
      break;
    case '4':
      printf("%.1lf / %.1lf = %.1lf \n", first, second, divv(first, second));
      break;
    case '5':
      printf("%.1lf! = %.1lf \n", first, fac(first));
      break;
    case '6':
      printf("sqrt(%.1lf) = %.1lf \n", first, sqt(first));
      break;
    // invalid selection
    default:
      printf("Error! operator is not correct");
      return(0);
  }

return(0);
}
