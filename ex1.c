/******************
Name:Maor Ophir
ID:
Assignment:1
*******************/
#include <stdio.h>

// REMINDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */

  // Number of positions to shift
  const int POSITIONS = 31;
  int num, position;
  printf("Please enter a number:\n");
  scanf("%d",&num);
  printf("Please enter a position:\n");
  scanf("%d",&position);
  // Buffer to save the user's number
  int buffer = num;
  /*Shifting left and then right to set the required
   bit to LSB position. */
  num = num << (POSITIONS - position);
  num = num >> (POSITIONS);
  // num & 1 to check whether the bit is 1 or 0
  int checkLsb = num & 1;
    // Print results:
  printf("The bit in position %d of number %d is: %d\n", position, buffer, checkLsb);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d",&num);
  printf("Please enter a position:\n");
  scanf("%d",&position);
  // Set a mask to the required position
  int mask = 1 << position;
  // Force required bit on
  num = num | mask;
  printf("Number with bit %d set to 1: %d\n", position, num);
  // Force required bit off
  num = num ^ mask;
  printf("Number with bit %d set to 0: %d\n", position, num);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d",&num);
  printf("Please enter a position:\n");
  scanf("%d",&position);
  // Mask required position
  mask = 1 << position;
  // Toggle the bit Off/On
  num = num ^ mask;
  printf("Number with bit %d toggled: %d\n", position, num);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d",&num);
  // Checking LSB to determine parity
  checkLsb = (num | 1) - num;
  printf("%d\n", checkLsb);

  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  const int ONE = 1, THREE = 3, FIVE = 5, SEVEN = 7, ELEVEN = 11;
  int num2;
  printf("Please enter the first number (octal):\n");
  scanf("%o",&num);
  printf("Please enter the second number (octal):\n");
  scanf("%o",&num2);
  // Summing the numbers
  int sum = num + num2;
  printf("the sum in hexadecimal: %X\n", sum);
  /* Preparing 4 masks one per each required bit
  and printing the results 1/0 */
  int bit3 = (ONE << THREE & sum) >> THREE;
  int bit5 = (ONE << FIVE & sum) >> FIVE;
  int bit7 = (ONE << SEVEN & sum) >> SEVEN;
  int bit11 = (ONE << ELEVEN & sum) >> ELEVEN;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11);
  printf("Bye!\n");
  
  return 0;
}
