/*
Name: Amal Najeeb
USN: NNM24EE012
25th june 2026
Dept of Electrical and Electronics Engineering
NMAM Institute of Technology

About: Assignment
C program to demonstrate the use of a Switch Statement.
Requirements:
Accept a user choice as input.
Use a switch-case statement for decision making.
Demonstrate the use of case, break, and default.
Handle invalid inputs appropriately.
Display meaningful output messages.
Test at least five different choices.
Show the result for both valid and invalid inputs.
*/

#include<stdio.h>
int main()
{
    int math_marks, chem_marks, phy_marks, bio_marks, cs_marks, total ;
    int gpa;

    printf("(Out of 100)\nEnter student maths marks: ");
    scanf("%d", &math_marks);
    printf("Enter student chemistry marks: ");
    scanf("%d", &chem_marks);
    printf("Enter student physics marks: ");
    scanf("%d", &phy_marks);
    printf("Enter student biology marks: ");
    scanf("%d", &bio_marks);
    printf("Enter student computer science marks: ");
    scanf("%d", &cs_marks);

    total = (math_marks + chem_marks + phy_marks + bio_marks + cs_marks); //Calculating total
    gpa = total /50;  

    if(total>500 || total <0){
        printf("Invalid inputs");
        return 0;
    }

    printf("\n\nReport Card\n===========\n");
    printf("Total Marks = %d\ngpa = %d\nStatus: ", total, gpa);

    switch(gpa){
        case(10) : printf(" Pass\nGrade: O+ OUTSTANDING!!");
            break;
        case(9) : printf(" Pass\nGrade: O");
            break;
        case(8) : printf(" Pass\nGrade: A");
            break;
        case(7) : printf(" Pass\nGrade: B");
            break;
        case(6) : printf(" Pass\nGrade: C");
            break;
        case(5) : printf(" Pass\nGrade: D");
            break;
        default : printf(" Fail\nGrade: F");
    }


}
/*
Example output
--------------
(Out of 100)
Enter student maths marks: 23
Enter student chemistry marks: 43
Enter student physics marks: -12
Enter student biology marks: -32
Enter student computer science marks: 12


Report Card
===========
Total Marks = 34
gpa = 0
Status:  Fail
Grade: F

------------------------------------------------------------------------------

Corner cases
------------
(Out of 100)
Enter student maths marks: -12 
Enter student chemistry marks: -42
Enter student physics marks: -23
Enter student biology marks: -43
Enter student computer science marks: -23
Invalid inputs

-------------------------------------------------------------------------------
Enter student maths marks: 100
Enter student chemistry marks: 100
Enter student physics marks: 130
Enter student biology marks: 130
Enter student computer science marks: 320
Invalid inputs
*/

