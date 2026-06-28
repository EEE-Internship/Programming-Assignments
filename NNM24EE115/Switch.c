/*The program should 
Accept a user choice as input.
Use a switch-case statement for decision making.
Demonstrate the use of case, break, and default.
Handle invalid inputs appropriately.
Display meaningful output messages.
Test at least five different choices.
Show the result for both valid and invalid inputs*/
//C Program to Demonstrate Switch Statement

#include <stdio.h>

int main()
{
    int choice;

    printf("MENU\n");
    printf("1. Display Hello\n");
    printf("2. Display Current Semester\n");
    printf("3. Display Department\n");
    printf("4. Display College Name\n");
    printf("5. Display Programming Language\n");
    printf("Enter your choice (1-5): ");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Hello! Welcome to C Programming.\n");
            break;

        case 2:
            printf("You are studying in Semester 5.\n");
            break;

        case 3:
            printf("Department: Electronics and Communication Engineering.\n");
            break;

        case 4:
            printf("Welcome to our College.\n");
            break;

        case 5:
            printf("Programming Language: C.\n");
            break;

        default:
            printf("Invalid Choice! Please enter a number between 1 and 5.\n");
    }

    return 0;
}