//DATE: 27-06-2026
//ASSIGNMENT_13
//Use of POINTERS
#include <stdio.h>
int main()
{
    int v=79;
    int *p=&v;
    *p=99;          
    printf("Value= %d", v);
    return 0;
}
//output
//Value= 99
