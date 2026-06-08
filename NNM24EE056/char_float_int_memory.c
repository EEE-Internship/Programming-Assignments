 /*
  
  Author: KEERTHAN S SANIL
  USN: NNM24EE056
  Date: 05/06/2026
  Dept: Electrical and Electronics Engineering
  College: NMAMIT
  Purpose: To find size of char, int and float datatypes and find its address
  
*/

#include <stdio.h>

int main()
{
    char x = 'A';
    int y = 1;
    float z = 2.12;
    char* addx = &x;
    int* addy = &y;
    float* addz = &z;
    printf("char has %zu bytes and its address is %p\n", sizeof(x), addx);
    printf("int has %zu bytes and its address is %p\n", sizeof(y), addy);
    printf("float has %zu bytes and its address is %p\n", sizeof(z), addz);
}