/*
Name: Amal Najeeb
USN: NNM24EE012
24th june 2026
Dept of Electrical and Electronics Engineering
NMAM Institute of Technology

About: Following code is to demonstrate use of different data types and operators
including arithmetic operations, relational operations, increment/decrement, type casting
and to display the size of each data type
*/
#include <stdio.h>

void main(){
    char section;
    int USN;
    int math_marks;
    int chem_marks;
    int phy_marks;
    float avg;

    printf("Enter student section: ");
    scanf("%c", &section);
    printf("Enter student USN: ");
    scanf("%d", &USN);
    printf("Enter student maths marks: ");
    scanf("%d", &math_marks);
    printf("Enter student chemistry marks: ");
    scanf("%d", &chem_marks);
    printf("Enter student physics marks: ");
    scanf("%d", &phy_marks);

    avg = (float) (math_marks + chem_marks + phy_marks)/3;

    if(avg>30){
        printf("\n\nStudent passed\n");

        printf("If student had lost one more mark \n");
        math_marks--;
        avg = (float) (math_marks + chem_marks + phy_marks)/3;
        if(avg>30){
            printf("Student would still have passed\n");
        } else {
            printf("Student would have failed\n");
        }
    } else {
        printf("\n\nStudent failed\n");
        
        printf("If student had gotten one more mark \n");
        math_marks++;
        avg = (float) (math_marks + chem_marks + phy_marks)/3;
        if(avg>30){
            printf("Student would have passed\n");
        } else {
            printf("Student would still fail lol \n");
        }
    }

    printf("\n\nSize of char data type is %d", sizeof(char));
    printf("\nSize of int data type is %d", sizeof(int));
    printf("\nSize of float data type is %d", sizeof(float));
    printf("\nSize of double data type is %d", sizeof(double));
    

}

/*
Example output
---------------

Enter student section: S
Enter student USN: 3456
Enter student maths marks: 12
Enter student chemistry marks: 21
Enter student physics marks: 21


Student failed
If student had gotten one more mark 
Student would still fail lol 


Size of char data type is 1
Size of int data type is 4
Size of float data type is 4
Size of double data type is 8
*/