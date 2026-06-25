/*
 * Author: GAGAN SHETTY
 * USN: NNM24EE038
 * DEPT: EEE
 * COLLEGE: NMAMIT
 * DATE: 25/06/2026
 * Purpose: Demonstrate the use of Switch Statement with case, break, and default
 */

#include <stdio.h>

int main()
{
    int choice;

    printf("========================================\n");
    printf("   DEMO\n");
    printf("========================================\n\n");

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Check Odd/Even\n");
    printf("0. Exit\n\n");

    for (int test = 0; test < 7; test++)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("----------------------------------------\n");
        printf("User Choice: %d\n", choice);
        printf("----------------------------------------\n");

        switch (choice)
        {
        case 1:
        {
            int a = 10, b = 5;
            printf("Case 1: Addition\n");
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        }

        case 2:
        {
            int a = 10, b = 5;
            printf("Case 2: Subtraction\n");
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        }

        case 3:
        {
            int a = 10, b = 5;
            printf("Case 3: Multiplication\n");
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        }

        case 4:
        {
            int a = 20, b = 4;
            printf("Case 4: Division\n");
            if (b != 0)
            {
                printf("%d / %d = %d\n", a, b, a / b);
            }
            else
            {
                printf("Error: Division by zero!\n");
            }
            break;
        }

        case 5:
        {
            int number = 7;
            printf("Case 5: Check Odd/Even\n");
            printf("Number: %d\n", number);
            if (number % 2 == 0)
            {
                printf("%d is EVEN\n", number);
            }
            else
            {
                printf("%d is ODD\n", number);
            }
            break;
        }

        case 0:
            printf("Case 0: Exiting Program\n");
            printf("Thank you for using the program!\n");
            return 0;

        default:
            printf("Invalid Choice: %d\n", choice);
            printf("ERROR: Please enter a valid choice (0-5)\n");
        }

        printf("\n");
    }

    printf("========================================\n\n");

    return 0;
}

/*
========================================
   DEMO
========================================

Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Check Odd/Even
0. Exit

Enter your choice: 90
----------------------------------------
User Choice: 90
----------------------------------------
Invalid Choice: 90
ERROR: Please enter a valid choice (0-5)

Enter your choice: 0
----------------------------------------
User Choice: 0
----------------------------------------
Case 0: Exiting Program
Thank you for using the program!
*/