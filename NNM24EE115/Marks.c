#include <stdio.h>

int main() {
    int rollNo;
    float marks;
    double percentage;
    char grade;

    // Accept student details
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Marks (out of 100): ");
    scanf("%f", &marks);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    // Type casting float to double
    percentage = (double)marks;

    // Display details
    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Marks       : %.2f\n", marks);
    printf("Grade       : %c\n", grade);
    printf("Percentage  : %.2lf\n", percentage);

    // Arithmetic operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("Marks + 5 = %.2f\n", marks + 5);
    printf("Marks - 5 = %.2f\n", marks - 5);
    printf("Marks * 2 = %.2f\n", marks * 2);
    printf("Marks / 2 = %.2f\n", marks / 2);

    // Relational operator
    printf("\n--- Pass/Fail Check ---\n");
    if (marks >= 40)
        printf("Status: PASS\n");
    else
        printf("Status: FAIL\n");

    // Increment and Decrement operators
    printf("\n--- Increment and Decrement ---\n");
    printf("Original Roll Number = %d\n", rollNo);

    rollNo++;
    printf("After Increment = %d\n", rollNo);

    rollNo--;
    printf("After Decrement = %d\n", rollNo);

    // Type Casting
    printf("\n--- Type Casting ---\n");
    printf("Marks as Float = %.2f\n", marks);
    printf("Marks as Integer = %d\n", (int)marks);

    // Size of data types
    printf("\n--- Size of Data Types ---\n");
    printf("Size of int    = %zu bytes\n", sizeof(int));
    printf("Size of float  = %zu bytes\n", sizeof(float));
    printf("Size of double = %zu bytes\n", sizeof(double));
    printf("Size of char   = %zu bytes\n", sizeof(char));

    return 0;
}