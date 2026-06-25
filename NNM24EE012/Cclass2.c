/*
Name: Amal Najeeb
USN: NNM24EE012
25th june 2026
Dept of Electrical and Electronics Engineering
NMAM Institute of Technology

About: Finding the smallest of two numbers using ternary operators
*/

#include <stdio.h>

int main()
{
    int a, b, min;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    min = (a < b) ? a : b;

    printf("min = %d\n", min);

    return 0;
}

/*
Example output
--------------
Enter two numbers: -5
-3456
min = -3456
*/

