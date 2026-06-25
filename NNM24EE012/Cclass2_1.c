/*
Name: Amal Najeeb
USN: NNM24EE012
25th june 2026
Dept of Electrical and Electronics Engineering
NMAM Institute of Technology

About: Assignment Question
Write a C program to calculate the percentage of a student based on marks obtained in 5 subjects.
Requirements:
Accept marks of 5 subjects from the user.
Calculate the total and percentage using arithmetic operators.
Use an if-else statement to determine whether the student has passed or failed (Pass if percentage ≥ 40%).
Use a ternary operator to assign a grade:
A : Percentage ≥ 90
B : Percentage ≥ 75
C : Percentage ≥ 50
D : Percentage ≥ 40
F : Percentage < 40
Display:
Total Marks
Percentage
Pass/Fail Status
Grade
*/

#include <stdio.h>

int main()
{
    int math_marks, chem_marks, phy_marks, bio_marks, cs_marks, total ;
    float percent;

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
    percent = total /5;                                                   //Calculating total percentage   

    printf("\n\nReport Card\n===========\n");
    printf("Total Marks = %d\nPercentage = %.2f\nStatus: ", total, percent);

    //Assigning grades
    (percent>100)?
    printf("Invalid inputs"):     //Incase total marks is more than what is possible
    (percent>=90)? 
    printf(" Pass\nGrade: A") :
    (percent>= 75)?
    printf(" Pass\nGrade: B") :
    (percent>= 50)?
    printf(" Pass\nGrade: C") :
    (percent>= 40)?
    printf(" Pass\nGrade: D") :
    (percent < 40 && percent >= 0)?
    printf(" Fail\nGrade: F") : 
    printf("Invalid input"); //Incase total marks is less than what is possible

    return 0;
}

/*
Example output
--------------
(Out of 100)
Enter student maths marks: 58
Enter student chemistry marks: 75
Enter student physics marks: 86
Enter student biology marks: 46
Enter student computer science marks: 68


Report Card
===========
Total Marks = 333
Percentage = 66.00
Status:  Pass
Grade: C

--------------------------------------------------------------------------
Corner Cases
------------
Enter student maths marks: 121
Enter student chemistry marks: 122
Enter student physics marks: 100
Enter student biology marks: 100
Enter student computer science marks: 100


Report Card
===========
Total Marks = 543
Percentage = 108.000000
Status: Invalid inputs

-------------------------------------------------------------------------
(Out of 100)
Enter student maths marks: 0
Enter student chemistry marks: -13
Enter student physics marks: -4245
Enter student biology marks: 132
Enter student computer science marks: 24


Report Card
===========
Total Marks = -4102
Percentage = -820.00
Status: Invalid input
*/

