/*
 * Author: GAGAN SHETTY
 * USN: NNM24EE038
 * DEPT: EEE
 * COLLEGE: NMAMIT
 * DATE: 25/06/2026
 * Purpose: Program demonstrating goto, break, and continue statements
 */

#include <stdio.h>

int main()
{
    int choice;

start:

    printf("Print numbers from 1 to 10:\n");
    printf("(Skipping 6 with continue, stopping at 8 with break)\n\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            printf("Skipping %d (continue statement)\n", i);
            continue;
        }

        if (i == 8)
        {
            printf("Breaking at %d (break statement)\n", i);
            break;
        }

        printf("%d ", i);
    }

    printf("\n\nLoop terminated!\n");
    printf("Enter 1 to run again (using goto) or 0 to exit: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\n--- Running again ---\n\n");
        goto start;
    }

    printf("Program ended.\n");
    return 0;
}

/*
Print numbers from 1 to 10:
(Skipping 6 with continue, stopping at 8 with break)

1 2 3 4 5 Skipping 6 (continue statement)
7 Breaking at 8 (break statement)


Loop terminated!
Enter 1 to run again (using goto) or 0 to exit: 1

--- Running again ---

Print numbers from 1 to 10:
(Skipping 6 with continue, stopping at 8 with break)

1 2 3 4 5 Skipping 6 (continue statement)
7 Breaking at 8 (break statement)


Loop terminated!
Enter 1 to run again (using goto) or 0 to exit: 0
Program ended.
*/