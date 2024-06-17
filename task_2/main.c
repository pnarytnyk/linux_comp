#include "header.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

  char op;
  char tmp;
  char str[100];
  printf("Please select an operation you would like to do:\n"\
         " 1 - convert to uppercase\n"\
         " 2 - convert to lowercase\n");

  scanf(" %c", &op);
  // read leftover \n
  scanf("%c", &tmp);
  printf("Please enter input string up to 100 characters long to perform selected operation (all input outside of 100 characters will be ignored): \n");
  fgets(str, sizeof(str), stdin);

  switch (op) {
    case '1':
      printf("%s \n", upper(str));
      break;
    case '2':
      printf("%s \n", lower(str));
      break;
    // invalid selection
    default:
      printf("Error! Wrong selection.");
      return(0);
  }

return(0);
}
