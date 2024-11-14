/******************
Name:Maor Ophir
ID:315144063
Assignment:1
*******************/
#include <stdio.h>

// REMINDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  unsigned int num, position, bit;
  printf("Please enter a number:\n");
  scanf("%u", &num);
  printf("Please enter a position:\n");
  scanf("%u", &position);
  int numsaver = num;
  num = num << (31 - position);
  printf("After left shift the number is :%u\n", num);
  num = num >> 31;
  printf("After right shift the number is :%u\n", num);
  bit = num;
  printf("The bit in position %u of number %d is %u\n", position, numsaver, bit);
  return 0;
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
