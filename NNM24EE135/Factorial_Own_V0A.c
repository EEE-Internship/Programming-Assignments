/*Author: Vrushabh P Ram
  USN: NNM24EE135
  Date: 07-June-2026
  Department: Electrical and Electronics Engineering 
  College: NMAM Instutute of Technology
  About the program: This program print factorial of input number*/
#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"
int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);   
    printf("Factorial of %d is %d", number, factorial(number));
    return 0;
}


