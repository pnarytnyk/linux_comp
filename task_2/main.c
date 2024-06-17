#include "header.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

  char op;
  char str[100];
  printf("Please select an operation you would like to do:\n"\
         " 1 - convert to uppercase\n"\
         " 2 - convert to lowercase\n");

  scanf("%c", &op);
  printf("Please enter input string up to 100 characters long to perform selected operation: \n");
  fgets(str, sizeof(str), stdin);
  scanf("%[^\n]s", str);

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