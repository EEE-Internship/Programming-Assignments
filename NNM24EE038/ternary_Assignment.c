/*
 * Author: GAGAN SHETTY
 * USN: NNM24EE038
 * DEPT: EEE
 * COLLEGE: NMAMIT
 * DATE: 25/06/2026
 * Purpose: Calculate percentage and grade using if-else and ternary operators
 */

#include <stdio.h>
#include <string.h>

int main()
{
    float marks;
    float total = 0, percentage;
    char grade;

    printf("   STUDENT GRADE CALCULATION SYSTEM\n");
    printf("========================================\n\n");

    printf("Enter marks for 5 subjects (out of 100 each):\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks);

        if (marks < 0 || marks > 100)
        {
            printf("Invalid input! Marks should be between 0 and 100.\n");
            printf("Please re-enter: ");
            scanf("%f", &marks);
        }

        total += marks;
    }

    percentage = (total / 500) * 100;

    printf("\n\n----------------------------------------\n");
    printf("   RESULTS\n");
    printf("----------------------------------------\n");
    printf("Total Marks:    %.2f / 500\n", total);
    printf("Percentage:     %.2f %%\n", percentage);

    if (percentage >= 40.0)
    {
        printf("Pass/Fail:      PASS");
    }
    else
    {
        printf("Pass/Fail:      FAIL");
    }

    grade = (percentage >= 90) ? 'A' : (percentage >= 75) ? 'B'
                                   : (percentage >= 50)   ? 'C'
                                   : (percentage >= 40)   ? 'D'
                                                          : 'F';

    printf("\nGrade:      %c\n\n", grade);
    return 0;
}

/*
*    STUDENT GRADE CALCULATION SYSTEM
* ========================================
*
* Enter marks for 5 subjects (out of 100 each):
* Subject 1: 1
* Subject 2: 1
* Subject 3: 1
* Subject 4: 1
* Subject 5: 1
*
*
* ----------------------------------------
*   RESULTS
* ----------------------------------------
* Total Marks:    5.00 / 500
* Percentage:     1.00 %
* Pass/Fail:      FAIL
* Grade:      F
*/