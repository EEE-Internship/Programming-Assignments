//Author:Veda Venkatesh Kamat
//USN: NNM24EE128
//Date: 05 June 2026
//Department: Electrical and Electronics Engineering
//College: NMAM Institute of Technology
//About the program: This program is used to declare the integer, float, and character variables and print their values, memory address and memory sizes
#include <stdio.h>
int main()
{
    int a=25;   //integer variable is declared and its value is 25
    float b=79.3;  //float variable is declared and its vale is 79.3
    char c=100;  //char variable is decalred and its value is V
    printf("value of a is %d\n", a); //prints the value of a
    printf("address of a = %p\n", &a); //prints the memory address of a
    printf("value of b is %f\n", b); //prints the value of b
    printf("address of b = %p\n", &b); //prints the memory address of b
    printf("value of c is %c\n", c);  //prints the value of c
    printf("address of c = %p\n", &c);  //prints the memory address of c
    printf("size of int= %zu bytes\n",sizeof(a)); //prints the size of a(integer variable)
    printf("size of float= %zu bytes\n",sizeof(b)); //prints the size of b(float variable)
    printf("size of char= %zu bytes\n",sizeof(c)); //prints the value of c(character variable)
    return 0;
}