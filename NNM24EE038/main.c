/*
 * Name: GAGAN SHETTY
 * USN: NNM24EE038
 * Date: 24/06/2026
 * Dept: EEE
 * College: NMAM Institute of Technology
 * Purpose: This program takes student details as input, calculates the grade based on marks, and displays the details along with the sizes of each data type.
 */

#include <stdio.h>

int main(void)
{
    char name[50];
    char usn[20];
    int marks;
    char grade;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter USN: ");
    scanf("%s", usn);

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90)
        grade = 'A';
    else if (marks >= 80)
        grade = 'B';
    else if (marks >= 70)
        grade = 'C';
    else if (marks >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("\nStudent Details:\n");
    printf("Name: %s\n", name);
    printf("USN: %s\n", usn);
    printf("Marks: %d\n", marks);
    printf("Grade: %c\n", grade);

    int a = 10;
    int b = 3;
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quot = a / b;
    int rem = a % b;

    printf("\nArithmetic operations:\n");
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, diff);
    printf("%d * %d = %d\n", a, b, prod);
    printf("%d / %d = %d\n", a, b, quot);
    printf("%d %% %d = %d\n", a, b, rem);

    printf("\nIncrement and decrement:\n");
    printf("Original a: %d\n", a);
    printf("Post-increment a++: %d\n", a++);
    printf("After post-increment a: %d\n", a);
    printf("Pre-decrement --a: %d\n", --a);
    printf("After pre-decrement a: %d\n", a);

    printf("\nData type sizes:\n");
    printf("size of name: %zu bytes\n", sizeof(name) / sizeof(name[0]));
    printf("size of usn: %zu bytes\n", sizeof(usn) / sizeof(usn[0]));
    printf("size of marks: %zu bytes\n", sizeof(marks));
    printf("size of grade: %zu bytes\n", sizeof(grade));

    return 0;
}