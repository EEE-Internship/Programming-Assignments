#include <stdio.h>
/*
Anwitha Bhat
NNM24EE022
05-June-2026
Department of Electrical and Electronics
NMAM Institute of Technology Nitte
Program with declarations of int float and char and to find address of each also to find the memory locations.
*/


int main()
{//Setting the values
    int a = 10;
    char ch = 'A';
    float f = 12.5;

    printf("Address of int variable a = %p\n", &a);//prints address of variable a
    printf("Address of char variable ch = %p\n", &ch);//prints address of variable ch
    printf("Address of float variable f = %p\n",&f);//prints address of variable f

    printf("\nMemory used by int = %zu bytes\n", sizeof(a));//prints memory used by int
    printf("Memory used by char = %zu bytes\n", sizeof(ch));//prints memory used by char
    printf("Memory used by float = %zu bytes\n", sizeof(f));//prints memory used by float

    return 0;
}
