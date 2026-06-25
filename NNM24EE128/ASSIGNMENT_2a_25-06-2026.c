//Name:Veda Venkatesh Kamat
//USN: NNM24EE128
//Date: 25 June 2026
//Department: Electrical and Electronics Engineering
//College: NMAM Institute of Technology
//Topic: use of switch statements
#include<stdio.h>
int main()
{
    char grade;
    printf("Enter your grade: \n\n");
    scanf("%c", &grade);
    switch(grade)
    {
        case 'A':
        case 'a':
        printf("perfect!");
        break;
        case 'B':
        case 'b':
        printf("well done!\n");
        break;
        case 'C':
        case 'c':
        printf("good!");
        break;
        case 'D':
        case 'd':
        printf("you can do better");
        break;
        case 'F':
        case 'f':
        printf("FAILED!!!");
        break;
        default:
        printf("Invalid grade");
    }
return 0;
}