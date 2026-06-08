/* **********************************************************************************************************
   * Author- Tilak Poojary                                                                                  *
   * USN- NNM24EE127                                                                                        *
   * Date- 05 June 2026                                                                                     *
   * Dept- Electrical and Electronics Engineering Department                                                *
   * College- NMAM Institute of Technology, Nitte                                                           *
   * Purpose- To get the address of variables declared and number of memory locations used by each variable *
   ********************************************************************************************************** */
   
#include<stdio.h>

int main(void)
{
    int x=10;          //declared x as an integer variable and initialized it with the value 10
    char y='A';        //declared y as a character variable and initialized it with the value 'A'
    float z=30.0000;   //declared z as a floating-point variable and initialized it with the value 30.0000

    printf("Address of x: %p\n", (void*)&x);  //used to print the address of variable x, casted to void* to avoid warnings
    printf("Address of y: %p\n", (void*)&y);  //used to print the address of variable y, casted to void* to avoid warnings
    printf("Address of z: %p\n", (void*)&z);  //used to print the address of variable z, casted to void* to avoid warnings

    printf("Number of memory locations used by x: %zu\n", sizeof(x));   //used to print the number of memory locations used by variable x, using sizeof operator which returns the size in bytes
    printf("Number of memory locations used by y: %zu\n", sizeof(y));   //used to print the number of memory locations used by variable y, using sizeof operator which returns the size in bytes
    printf("Number of memory locations used by z: %zu\n", sizeof(z));   //used to print the number of memory locations used by variable z, using sizeof operator which returns the size in bytes

    return 0;
}
/* **************************************************
                                                    #
  # Output:                                         #
                                                    #
  # Address of x: 00000000005FFE7C                  #
  # Address of y: 00000000005FFE7B                  #
  # Address of z: 00000000005FFE74                  #
  # Number of memory locations used by x: 4         #
  # Number of memory locations used by y: 1         #
  # Number of memory locations used by z: 4         #
                                                    #
  *************************************************** */

/* Reference:
   https://www.w3schools.com/c/c_memory_address.php 
   https://www.geeksforgeeks.org/c/variables-in-c/
   */
